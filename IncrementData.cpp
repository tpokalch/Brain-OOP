
#include "IncrementData.hpp"

IncrementData::~IncrementData()
{

}

void IncrementData::Execute(InstructionPointer &IP) const
{
	_data->IncrementData(IP);
}

std::shared_ptr<IncrementData> IncrementData::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<IncrementData>(new IncrementData);
	return instance;
}

IncrementData::IncrementData()
{
	_data = _data->getInstance();
}

std::shared_ptr<IncrementData>IncrementData::instance = 0;


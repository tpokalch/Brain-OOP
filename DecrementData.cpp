
#include "DecrementData.hpp"

DecrementData::~DecrementData()
{

}

void DecrementData::Execute(InstructionPointer &IP) const
{
	_data->DecrementData(IP);
};

std::shared_ptr<DecrementData> DecrementData::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<DecrementData>(new DecrementData);
	return instance;
}

static std::shared_ptr<DecrementData>instance;

DecrementData::DecrementData()
{
	_data = _data->getInstance();
}

std::shared_ptr<DecrementData> DecrementData::instance = 0;


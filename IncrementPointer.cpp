
#include "IncrementPointer.hpp"

IncrementPointer::IncrementPointer()
{
	_data = _data->getInstance();
}

IncrementPointer::~IncrementPointer()
{

}

void IncrementPointer::Execute(InstructionPointer &IP) const
{
	_data->IncrementPointer(IP);
};

std::shared_ptr<IncrementPointer> IncrementPointer::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<IncrementPointer>(new IncrementPointer);
	return instance;
}

std::shared_ptr<IncrementPointer>IncrementPointer::instance = 0;



#include "DecrementPointer.hpp"

DecrementPointer::DecrementPointer()
{
	_data = _data->getInstance();
}

DecrementPointer::~DecrementPointer()
{

}

void DecrementPointer::Execute(InstructionPointer &IP) const
{
	_data->DecrementPointer(IP);
}

std::shared_ptr<DecrementPointer> DecrementPointer::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<DecrementPointer>(new DecrementPointer);
	return instance;
}

std::shared_ptr<DecrementPointer>DecrementPointer::instance = 0;


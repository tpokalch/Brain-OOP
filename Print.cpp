
#include "Print.hpp"

Print::~Print()
{

}

void	Print::Execute(InstructionPointer &IP) const
{
	_data->Print(IP);
}

std::shared_ptr<Print> Print::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<Print>(new Print);
	return instance;
}

std::shared_ptr<Print> Print::instance = 0;

Print::Print()
{
	_data = _data->getInstance();
}


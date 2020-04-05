
#include "Processor.hpp"

Processor::Processor(const Instructions &commands):commands(commands)
{

}

void Processor::Run()
{
	while (*IP)
		(*IP)->Execute(IP);
}


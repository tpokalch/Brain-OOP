
#include "Typedefs.hpp"
#include "ICommand.hpp"

class Processor
{
public:
	Processor(const Instructions &commands);
	void Run();
private:
	Instructions commands;
	InstructionPointer IP = begin(commands);
};


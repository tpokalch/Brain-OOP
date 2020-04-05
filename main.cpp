
#include "CycleBegin.hpp"
#include "CycleEnd.hpp"
#include "IncrementData.hpp"
#include "DecrementData.hpp"
#include "IncrementPointer.hpp"
#include "DecrementPointer.hpp"
#include "Print.hpp"
#include "Compiler.hpp"
#include "Processor.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./brainfuck commands" << std::endl;
		return (0);
	}
	try
	{
		Compiler compiler(argv[1]);
		Processor processor(compiler.commands);
		processor.Run();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	system("leaks -q brainfuck");
}


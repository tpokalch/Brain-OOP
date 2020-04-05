
#include "Compiler.hpp"
#include "CommandFactory.hpp"

std::stack<InstructionPointer> openBrackets;
InstructionPointer currentInstance;

Compiler::Compiler(char *instr):commands{ strlen(instr) + 1, NULL }
{
	CommandFactory myFactory;
	std::map<char, eCommandType> commandType;

	commandType['+'] = eIncrementData;
	commandType['-'] = eDecrementData;
	commandType['>'] = eIncrementPointer;
	commandType['<'] = eDecrementPointer;
	commandType['.'] = ePrint;
	commandType['['] = eCycleBegin;
	commandType[']'] = eCycleEnd;

	currentInstance = begin(commands);
	for (int i = 0; instr[i]; i++) {
		*currentInstance = myFactory.createCommand(
				commandType.find(instr[i])->second);
		currentInstance++;
	}
	if (!openBrackets.empty())
		throw std::invalid_argument("No Matching Closing Bracket.");
}

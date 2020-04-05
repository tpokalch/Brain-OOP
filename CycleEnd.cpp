
#include "CycleEnd.hpp"
#include "CycleBegin.hpp"

extern std::stack<InstructionPointer> openBrackets;
extern InstructionPointer currentInstance;

CycleEnd::CycleEnd()
{
	if (openBrackets.empty())
		throw std::invalid_argument("No Matching Opening Bracket.");
	// matching bracket of this closing bracket
	// lies at the top of the stack
	correspondingBracket = openBrackets.top();

	//top's corresponding bracket is current instance
	std::shared_ptr<CycleBegin> topBracket = std::dynamic_pointer_cast<CycleBegin>(*correspondingBracket);
	topBracket->correspondingBracket = currentInstance;

	// the next constructed closing bracket will
	// correspond to previous element in stack
	openBrackets.pop();

	_data = DataPointer::getInstance();
}

CycleEnd::~CycleEnd()
{

}

void CycleEnd::Execute(InstructionPointer &IP) const
{
	_data->EndCycle(IP, correspondingBracket);
}



#include "CycleBegin.hpp"

extern std::stack<InstructionPointer> openBrackets;
extern InstructionPointer currentInstance;

CycleBegin::CycleBegin()
{
	openBrackets.push(currentInstance);
	_data = _data->getInstance();
}

CycleBegin::~CycleBegin()
{

}

void CycleBegin::Execute(InstructionPointer &IP) const
{
	_data->StartCycle(IP, correspondingBracket);
}


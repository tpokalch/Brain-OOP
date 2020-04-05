
#ifndef TYPEDEFS_HPP
# define TYPEDEFS_HPP

#include "libraries.hpp"

enum	eCommandType
{
	eIncrementData = 0,
	eDecrementData,
	eIncrementPointer,
	eDecrementPointer,
	eCycleBegin,
	eCycleEnd,
	ePrint,
};

class ICommand;

typedef std::vector<std::shared_ptr<ICommand>> Instructions;
typedef Instructions::iterator InstructionPointer;

#endif


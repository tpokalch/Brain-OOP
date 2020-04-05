
#include "ICommand.hpp"
#include "DataPointer.hpp"

#ifndef CYCLEBEGIN_HPP
# define CYCLEBEGIN_HPP

class CycleBegin: public ICommand
{
public:
	CycleBegin();
	~CycleBegin();
	void Execute(InstructionPointer &IP) const;
private:
	friend class CycleEnd; // can set correspondingBracket to an instance of itself
	InstructionPointer correspondingBracket;
	std::shared_ptr<DataPointer> _data;


};

#endif


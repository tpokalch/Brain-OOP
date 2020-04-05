
#include "ICommand.hpp"
#include "DataPointer.hpp"

class CycleEnd: public ICommand
{
public:
	CycleEnd();
	~CycleEnd();
	void Execute(InstructionPointer &IP) const;
private:
	std::shared_ptr<DataPointer> _data;

	InstructionPointer correspondingBracket;
};



#include "ICommand.hpp"
#include "DataPointer.hpp"

class IncrementPointer: public ICommand
{
public:
	~IncrementPointer();
	void Execute(InstructionPointer &IP) const;
	static std::shared_ptr<IncrementPointer>getInstance();
private:
	static std::shared_ptr<IncrementPointer>instance;
	IncrementPointer();
	std::shared_ptr<DataPointer> _data;
};


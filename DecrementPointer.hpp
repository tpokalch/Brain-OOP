
#include "ICommand.hpp"
#include "DataPointer.hpp"

class DecrementPointer: public ICommand
{
public:
	~DecrementPointer();
	void Execute(InstructionPointer &IP) const;
	static std::shared_ptr<DecrementPointer>getInstance();
private:
	static std::shared_ptr<DecrementPointer>instance;

	DecrementPointer();
	std::shared_ptr<DataPointer> _data;

};


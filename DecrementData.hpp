
#include "ICommand.hpp"
#include "DataPointer.hpp"

class DecrementData: public ICommand
{
public:
	~DecrementData();
	void Execute(InstructionPointer &IP) const;
	static std::shared_ptr<DecrementData>getInstance();
private:
	static std::shared_ptr<DecrementData>instance;
	DecrementData();
	std::shared_ptr<DataPointer> _data;
};


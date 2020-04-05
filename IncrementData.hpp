
#include "ICommand.hpp"
#include "DataPointer.hpp"

class IncrementData: public ICommand
{
public:

	~IncrementData();
	void Execute(InstructionPointer &IP) const;
	static std::shared_ptr<IncrementData>getInstance();
private:
	static std::shared_ptr<IncrementData>instance;
	std::shared_ptr<DataPointer> _data;
	IncrementData();
};


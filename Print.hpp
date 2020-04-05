
#include "ICommand.hpp"
#include "DataPointer.hpp"

class Print: public ICommand
{
public:
	~Print();
	void Execute(InstructionPointer &IP) const;
	static std::shared_ptr<Print> getInstance();
private:
	Print();
	static std::shared_ptr<Print> instance;
	std::shared_ptr<DataPointer> _data;
};


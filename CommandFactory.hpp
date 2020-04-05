
#include "CycleBegin.hpp"
#include "CycleEnd.hpp"
#include "IncrementData.hpp"
#include "DecrementData.hpp"
#include "IncrementPointer.hpp"
#include "DecrementPointer.hpp"
#include "Print.hpp"

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

class CommandFactory
{
public:
	std::shared_ptr<ICommand> createCommand( eCommandType type ) const;

private:
	std::shared_ptr<ICommand> createIncrementData() const;
	std::shared_ptr<ICommand> createDecrementData() const;
	std::shared_ptr<ICommand> createIncrementPointer() const;
	std::shared_ptr<ICommand> createDecrementPointer() const;
	std::shared_ptr<ICommand> createPrint() const;
	std::shared_ptr<ICommand> createCycleBegin() const;
	std::shared_ptr<ICommand> createCycleEnd() const;
};


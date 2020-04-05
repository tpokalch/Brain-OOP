
#include "CommandFactory.hpp"

std::shared_ptr<ICommand> CommandFactory::createCommand( eCommandType type ) const
{
	std::shared_ptr <ICommand> (CommandFactory::* create[])() const = {
			&CommandFactory::createIncrementData,
			&CommandFactory::createDecrementData,
			&CommandFactory::createIncrementPointer,
			&CommandFactory::createDecrementPointer,
			&CommandFactory::createCycleBegin,
			&CommandFactory::createCycleEnd,
			&CommandFactory::createPrint
	};
	std::shared_ptr<ICommand> ret;
	ret = (this->*create[type])();
	return (ret);
};

std::shared_ptr<ICommand> CommandFactory::createIncrementData() const
{
	return IncrementData::getInstance();
}

std::shared_ptr<ICommand> CommandFactory::createDecrementData() const
{
	return DecrementData::getInstance();
}

std::shared_ptr<ICommand> CommandFactory::createIncrementPointer() const
{
	return (IncrementPointer::getInstance());
}

std::shared_ptr<ICommand> CommandFactory::createDecrementPointer() const
{
	return DecrementPointer::getInstance();
}

std::shared_ptr<ICommand> CommandFactory::createPrint() const
{
	return Print::getInstance();
}

std::shared_ptr<ICommand> CommandFactory::createCycleBegin() const
{
	return (std::shared_ptr<class CycleBegin>(new class CycleBegin()));
}

std::shared_ptr<ICommand> CommandFactory::createCycleEnd() const
{
	return (std::shared_ptr<class CycleEnd>(new class CycleEnd()));
}


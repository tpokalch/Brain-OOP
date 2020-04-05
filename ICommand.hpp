
#ifndef ICOMMAND_HPP
# define ICOMMAND_HPP

#include "Typedefs.hpp"

class ICommand
{
public:
        virtual ~ICommand() = default;
        virtual void Execute(InstructionPointer &IP) const = 0;
};

//extern std::stack<InstructionPointer> openBrackets;
//extern InstructionPointer currentInstance;

#endif


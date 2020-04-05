
#ifndef TYPEDEFS_HPP
# define TYPEDEFS_HPP

#include "libraries.hpp"

class ICommand;

typedef std::vector<std::shared_ptr<ICommand>> Instructions;
typedef Instructions::iterator InstructionPointer;

#endif


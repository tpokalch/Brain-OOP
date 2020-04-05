
#ifndef DATAPOINTER_HPP
# define DATAPOINTER_HPP

#include "ICommand.hpp"

// reciever class
class DataPointer
{
public:
	~DataPointer();

	static std::shared_ptr<DataPointer> getInstance();
	static std::shared_ptr<DataPointer> instance;

	// only IP++ here
	void IncrementData(InstructionPointer &IP);
	void DecrementData(InstructionPointer &IP);
	void IncrementPointer(InstructionPointer &IP);
	void DecrementPointer(InstructionPointer &IP);
	void Print(InstructionPointer &IP);

	// here start and end cycles change the IP accordingly
	void StartCycle(InstructionPointer &IP, const InstructionPointer &SKIP);
	void EndCycle(InstructionPointer &IP, const InstructionPointer &SKIP);

private:
	DataPointer();
	std::vector<char> arr;
	std::vector<char>::iterator ptr;
};

#endif


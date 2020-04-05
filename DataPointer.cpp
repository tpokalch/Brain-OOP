
#include "DataPointer.hpp"

std::shared_ptr<DataPointer> DataPointer::getInstance()
{
	if (instance == NULL)
		instance = std::shared_ptr<DataPointer>(new DataPointer());
	return instance;
}

DataPointer::~DataPointer()
{

}
void DataPointer::IncrementData(InstructionPointer &IP)
{
	++(*ptr);
	++IP;
}
void DataPointer::DecrementData(InstructionPointer &IP)
{
	--(*ptr);
	++IP;
}

void DataPointer::IncrementPointer(InstructionPointer &IP)
{
	if (ptr == end(arr))
	{
		throw std::out_of_range("Iterator Overflows Bounds.");
	}
	ptr++;
	++IP;
}

void DataPointer::DecrementPointer(InstructionPointer &IP)
{
	if (ptr < begin(arr))
	{
		throw std::out_of_range("Iterator Underflows Bounds.");
	}
	ptr--;
	++IP;
}

void DataPointer::Print(InstructionPointer &IP)
{
	std::cout << *ptr;
	++IP;
}

// here start and end cycles change the IP accordingly
void DataPointer::StartCycle(InstructionPointer &IP, const InstructionPointer &SKIP)
{
	if (*ptr) {
		++IP;
	}
	else {
		IP = SKIP + 1; // skip to after end cycle
	}
}

void DataPointer::EndCycle(InstructionPointer &IP, const InstructionPointer &SKIP)
{
	IP = SKIP;
	// skip to begin cycle
	// if the *prt doesn't hold
	// this will come back to SKIP + 1
}

DataPointer::DataPointer():arr(30000)
{
	ptr = begin(arr);
}

std::shared_ptr<DataPointer> DataPointer::instance = NULL;


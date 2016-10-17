#include "FixedCapacityStackOfStrings.h"

FixedCapacityStackOfStrings::FixedCapacityStackOfStrings(int cap):N(0)
{
	s = new string[cap];
}

FixedCapacityStackOfStrings::~FixedCapacityStackOfStrings()
{
	delete[] s;
}

void FixedCapacityStackOfStrings::push(string& item)
{
	s[N++] = item;
}

string FixedCapacityStackOfStrings::pop()
{
	return s[--N];
}

bool FixedCapacityStackOfStrings::isEmpty()
{
	return N == 0;
}

int FixedCapacityStackOfStrings::size()
{
	return N;
}

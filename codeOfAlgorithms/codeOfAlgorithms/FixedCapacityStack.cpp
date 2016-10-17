#include "FixedCapacityStack.h"

template<typename T>
FixedCapacityStack<T>::FixedCapacityStack(int xarys):N(0)
{
	_vs = new T[xarys];
}

template<typename T>
FixedCapacityStack<T>::~FixedCapacityStack()
{
	delete[] _vs;
}

template<typename T>
void FixedCapacityStack<T>::push(T& item)
{
	_vs[N++] = item;
}

template<typename T>
T FixedCapacityStack<T>::pop()
{
	return _vs[--N];
}

template<typename T>
bool FixedCapacityStack<T>::isEmpty()
{
	return N == 0;
}

template<typename T>
int FixedCapacityStack<T>::size()
{
	return N;
}


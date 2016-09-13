#include "FixedCapacityStack.h"

template<typename T>
FixedCapacityStack<T>::FixedCapacityStack(int cap) :N(0)
{
	vs.assign(cap, (T)0);
}

template<typename T>
FixedCapacityStack<T>::~FixedCapacityStack()
{

}

template<typename T>
void FixedCapacityStack<T>::push(T item)
{
	vs[N++] = item;
}

template<typename T>
T FixedCapacityStack<T>::pop()
{
	return vs[--N];
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


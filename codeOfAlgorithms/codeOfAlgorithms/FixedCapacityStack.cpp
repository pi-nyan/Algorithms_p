#include "FixedCapacityStack.h"

template<typename T>
FixedCapacityStack<T>::FixedCapacityStack():N(0)
{
	vs = new vector<T>;
	_tmp = new T;
}

template<typename T>
FixedCapacityStack<T>::~FixedCapacityStack()
{
	delete vs;
	delete _tmp;
}

template<typename T>
void FixedCapacityStack<T>::push(T item)
{
	vs->push_back(item);
	N++;
}

template<typename T>
T FixedCapacityStack<T>::pop()
{
	*_tmp = vs->back();
	vs->pop_back();
	N--;
	return *_tmp;
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


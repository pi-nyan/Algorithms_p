#pragma once
#ifndef AGR_STARK_IPL_H
#define AGR_STARK_IPL_H

#include "AgrStack.h"
template<typename T>
aStack<T>::aStack() :N(0),_first(nullptr)
{

}

template<typename T>
aStack<T>::~aStack()
{
	delete _first;
}

template<typename T>
inline bool aStack<T>::isEmpty()
{
	return _first==nullptr;
}

template<typename T>
inline int aStack<T>::size()
{
	return N;
}

template<typename T>
inline void aStack<T>::push(T item)
{
	Node* oldfirst = _first;
	_first = new Node;
	_first->_nodeItem = item;
	_first->next = oldfirst;
	N++;
}

template<typename T>
inline T aStack<T>::pop()
{
	T itemTmp = _first->_nodeItem;
	Node* nodeTmp = _first;
	_first = _first->next;
	delete nodeTmp;
	N--;
	return itemTmp;
}





#endif // !AGR_STARK_IPL_H






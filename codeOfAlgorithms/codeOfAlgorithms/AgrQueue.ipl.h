#pragma once
#ifndef AGR_QUEUE_IPL_H
#define AGR_QUEUE_IPL_H
#include "AgrQueue.h"

template<typename T>
inline aQueue<T>::aQueue():N(0),_first(nullptr),_last(nullptr)
{
}

template<typename T>
inline aQueue<T>::~aQueue()
{
	delete _first;
	delete _last;
}

template<typename T>
inline bool aQueue<T>::isEmpty()
{
	return _first==nullptr;
}

template<typename T>
inline int aQueue<T>::size()
{
	return N;
}

template<typename T>
inline void aQueue<T>::enqueue(T& item)
{
	Node* oldlast = _last;
	_last = new Node;
	_last->_nodeItem = item;
	_last->next = nullptr;
	if (isEmpty())
	{
		_first = _last;
	}
	else
	{
		oldlast->next = _last;
	}
	N++;
}

template<typename T>
inline T aQueue<T>::dequeue()
{
	T itemTmp = _first->_nodeItem;
	_first = _first->next;
	if (isEmpty())
	{
		_last = nullptr;
	}
	N--;
	return itemTmp;
}



#endif
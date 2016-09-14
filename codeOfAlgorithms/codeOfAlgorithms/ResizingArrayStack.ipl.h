#pragma once

#ifndef ResizingArrayStack_ipl_H
#define ResizingArrayStack_ipl_H

#include "ResizingArrayStack.h"

template<typename T>
ResizingArrayStack<T>::ResizingArrayStack():N(0),_aryLength(1)
{
	_ary = new T[_aryLength];
}

template<typename T>
inline ResizingArrayStack<T>::~ResizingArrayStack()
{
	delete[] _ary;
}

template<typename T>
inline bool ResizingArrayStack<T>::isEmpty()
{
	return N == 0;
}

template<typename T>
inline int ResizingArrayStack<T>::size()
{
	return N;
}

template<typename T>
inline void ResizingArrayStack<T>::push(T item)
{
	if (N == _aryLength)
	{
		_resize(2 * _aryLength);
	}
	_ary[N++] = item;
}

template<typename T>
inline T ResizingArrayStack<T>::pop()
{
	T _item = _ary[--N];
	_ary[N] = _ary[N+1];
	if (N > 0 && N == _aryLength / 4)
	{
		_resize(_aryLength / 2);
	}
	return _item;
}

template<typename T>
inline void ResizingArrayStack<T>::_resize(int maxa)
{
	T *__tmp = new T[maxa];
	for (auto i = 0; i < N; i++)
	{
		__tmp[i] = _ary[i];
	}
	delete[] _ary;
	_ary = __tmp;
	_aryLength = maxa;
	__tmp = nullptr;
	/*delete[] __tmp;*/
}

template<typename T>
inline bool ResizingArrayStack<T>::sIterator::hasNext()
{
	return i>0;
}

template<typename T>
inline T ResizingArrayStack<T>::sIterator::next()
{
	return _ary[--i];
}

template<typename T>
inline void ResizingArrayStack<T>::sIterator::remove()
{

}


#endif
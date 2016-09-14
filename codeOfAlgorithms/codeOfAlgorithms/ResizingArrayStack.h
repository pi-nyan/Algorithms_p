#pragma once
#ifndef ResizingArrayStack_H
#define ResizingArrayStack_H

#include <memory>

template<typename T>
class ResizingArrayStack
{
public:
	ResizingArrayStack();
	~ResizingArrayStack();

	bool isEmpty();
	int size();

	void push(T item);
	T pop();

	class Iterator
	{
	public:
		bool hasNext();
		T next();
		void remove();
	private:
		int i = N;
	};

private:
	int _aryLength;
	void _resize(int maxa);
	int N;
	std::unique_ptr<T> pt;
	T *_ary;
};

#include "ResizingArrayStack.ipl.h"
#endif


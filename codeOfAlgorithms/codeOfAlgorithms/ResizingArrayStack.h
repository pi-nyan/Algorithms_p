#pragma once
#ifndef ResizingArrayStack_H
#define ResizingArrayStack_H

template<typename T>
class ResizingArrayStack
{
public:
	ResizingArrayStack();
	~ResizingArrayStack();

	bool isEmpty();
	int size();

	void push(T& item);
	T pop();

private:
	int _aryLength;
	void _resize(int maxa);
	int N;
	T *_ary;
};

#include "ResizingArrayStack.ipl.h"
#endif



#pragma once
#ifndef AGR_STACK_H
#define AGR_STARK_H

template<typename T>
class aStack
{
public:
	aStack();
	~aStack();
	
	bool isEmpty();
	int size();

	void push(T item);
	T pop();

private:
	struct Node
	{
		Node *next;
		T _nodeItem;
	};
	Node _first;
	int N;
};

#include "AgrStack.ipl.h"
#endif
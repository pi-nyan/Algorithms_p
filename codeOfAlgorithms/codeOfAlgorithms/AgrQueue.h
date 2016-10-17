#pragma once
#ifndef AGR_QUEUE_H
#define AGE_QUEUE_H

template<typename T>
class aQueue
{
public:
	aQueue();
	~aQueue();

	bool isEmpty();
	int size();

	void enqueue(T& item);
	T dequeue();
private:
	struct Node
	{
		Node *next;
		T _nodeItem;
	};
	int N;
	Node* _first;
	Node* _last;

};

#include "AgrQueue.ipl.h"

#endif
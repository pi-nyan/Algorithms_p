#pragma once
#ifndef FixedCapacityStack_H
#define FixedCapacityStack_H

template<typename T>
class FixedCapacityStack
{
public:
	FixedCapacityStack(int xarys);
	~FixedCapacityStack();

	void push(T& item);
	T pop();
	
	bool isEmpty();
	int size();
private:
	T *_vs;
	int N;
};
#endif
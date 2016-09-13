#pragma once
#ifndef FixedCapacityStack_H
#define FixedCapacityStack_H
#include <vector>
using namespace std;

template<typename T>
class FixedCapacityStack
{
public:
	FixedCapacityStack(int cap);
	~FixedCapacityStack();

	void push(T item);
	T pop();

	bool isEmpty();
	int size();
private:
	vector<T> vs;
	int N;
};
#endif
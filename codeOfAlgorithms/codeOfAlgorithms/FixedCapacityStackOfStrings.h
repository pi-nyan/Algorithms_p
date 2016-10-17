#pragma once
#ifndef FixedCapacityStackOfStrings_H
#define FixedCapacityStackOfStrings_H

#include <string>
#include <vector>
using namespace std;

class FixedCapacityStackOfStrings
{
public:
	FixedCapacityStackOfStrings(int cap);
	~FixedCapacityStackOfStrings();

	void push(string& item);
	string pop();

	bool isEmpty();
	int size();

private:
	int N;
	string *s;
};
#endif
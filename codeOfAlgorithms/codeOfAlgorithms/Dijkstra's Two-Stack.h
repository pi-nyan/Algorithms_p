#pragma once


#include <stack>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

#define HANDAN  '0'<=*iters2 && *iters2<='9'|| *iters2 =='.'


class Evaluate
{
public:
	Evaluate(const Evaluate& eva) = delete;
	Evaluate(string str);
	double expressionEvaluation();

	~Evaluate();

private:
	string _str;
};
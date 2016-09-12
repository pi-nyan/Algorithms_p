#pragma once
#ifndef Dijkstra_s_Two_Stack_H
#define Dijkstra_s_Two_Stack_H

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

#endif // !Dijkstra_s_Two_Stack_H
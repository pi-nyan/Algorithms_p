#include <iostream>
#include <string>
#include "Dijkstra's Two-Stack.h"
using namespace std;

int main()
{
	string s = "((((685.3+3242.3)*29.3)+(11+43.55))+sqrt(100))";
	double result;
	Evaluate *e = new Evaluate(s);
	result = e->expressionEvaluation();
	cout.precision(15);
	cout<<result << endl;
	delete e;
	return 0;
}
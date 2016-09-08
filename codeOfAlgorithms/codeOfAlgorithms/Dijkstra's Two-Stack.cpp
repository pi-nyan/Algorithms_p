/*
Dijkstra¡¯s Two-Stack Algorithm for Expression Evaluation

*/

#include <stack>
#include <string>
#include <iostream>
using namespace std;

class Evaluate
{
public:
	Evaluate(const Evaluate& eva) = delete;
	Evaluate(string str);
	double expressionEvaluation(string * _str);

	~Evaluate();

private:
	string _str;
};

Evaluate::Evaluate(string str):_str(str)
{
}

double Evaluate::expressionEvaluation(string * _str)
{
	stack<char*> stachar;
	stack<double> stadble;



	return 0.0;
}

Evaluate::~Evaluate()
{
}



/*
Dijkstra¡¯s Two-Stack Algorithm for Expression Evaluation

*/
#include "Dijkstra's Two-Stack.h"


Evaluate::Evaluate(string& str):_str(str)
{
}

double Evaluate::expressionEvaluation()
{
	stack<char> stachar;
	stack<double> stadble;

	auto iters1 = _str.begin();
	auto iters2 = _str.begin();
	while (iters1 != _str.end())
	{
		if (*iters1 == ('('))
		{
			;
		}
		else if (*iters1 == ('+'))
		{
			stachar.push(*iters1);
		}
		else if (*iters1 == ('-'))
		{
			stachar.push(*iters1);
		}
		else if (*iters1 == ('*'))
		{
			stachar.push(*iters1);
		}
		else if (*iters1 == ('/'))
		{
			stachar.push(*iters1);
		}
		else if (*iters1 == ('s'))
		{
			stachar.push(*iters1);
			iters1 += 3;
		}
		else if (*iters1 == (')'))
		{
			auto op = stachar.top();
			auto v = stadble.top();
			stadble.pop();
			if (op == ('+'))
			{
				v += stadble.top();
				stadble.pop();
			}
			else if (op == '-')
			{
				v = stadble.top() - v;
				stadble.pop();
			}
			else if (op == '*')
			{
				v *= stadble.top();
				stadble.pop();
			}
			else if (op == '/')
			{
				v = stadble.top() / v;
				stadble.pop();
			}
			else if (op == 's')
			{
				v = sqrt(v);
			}
			stadble.push(v);
			stachar.pop();
		}
		else
		{
			string tmp;
			iters2 = iters1;

			while (HANDAN)
			{
				iters2++;
			}
			tmp.assign(iters1, iters2);
			stadble.push(stod(tmp));
			iters1 = iters2 - 1;
		}
		iters1++;
	}

	return stadble.top();
}

Evaluate::~Evaluate()
{
}



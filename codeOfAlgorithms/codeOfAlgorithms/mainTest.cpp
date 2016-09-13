#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include "FixedCapacityStack.h"
#include "FixedCapacityStack.cpp"
using namespace std;

int main()
{
	FixedCapacityStack<string> *s = new FixedCapacityStack<string>;
	ifstream fin;
	fin.open("tobe.txt", ios::in | ios::binary);

	string item;
	while (!fin.eof())
	{
		fin >> item;
		if (item != "-")
		{
			s->push(item);
		}
		else if (!fin.eof())
		{
			cout << s->pop() << " ";
		}
	}
	cout << endl;
	cout << s->size() <<" left on stack"<< endl;
	delete s;
	fin.close();
	system("pause");
	return 0;

}
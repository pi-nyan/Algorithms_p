#include <iostream>
#include <string>
#include <fstream>
#include "FixedCapacityStackOfStrings.h"
using namespace std;

int main()
{
	FixedCapacityStackOfStrings s(100);
	ifstream fin;
	fin.open("tobe.txt", ios::in | ios::binary);

	string item;
	while (!fin.eof())
	{
		fin >> item;
		if (item != "-")
		{
			s.push(item);
		}
		else if (!fin.eof())
		{
			cout << s.pop() << " ";
		}
	}
	cout << endl;
	cout << s.size() << endl;
	fin.close();
	system("pause");
	return 0;

}
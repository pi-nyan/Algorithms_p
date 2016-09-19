#include "Test_FixedCapacityStackOfStrings.h"
void AlgorithmsTest::tFixedCapacityStackOfStack()
{
	FixedCapacityStackOfStrings tras(100);
	ifstream fin;
	fin.open("tobe.txt", ios::in | ios::binary);

	string item;
	while (!fin.eof())
	{
		fin >> item;
		if (item != "-")
		{
			tras.push(item);
		}
		else if (!fin.eof())
		{
			cout << tras.pop() << " ";
		}
	}
	cout << endl;
	cout << tras.size() << " left on stack" << endl;
	fin.close();
}
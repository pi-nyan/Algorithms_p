#include "Test_AgrQueue.h"

void AlgorithmsTest::tAgrQueue()
{
	aQueue<string> tras;
	ifstream fin;
	fin.open("tobe.txt", ios::in | ios::binary);

	string item;
	while (!fin.eof())
	{
		fin >> item;
		if (item != "-")
		{
			tras.enqueue(item);
		}
		else if (!fin.eof())
		{
			cout << tras.dequeue() << " ";
		}
	}
	cout << endl;
	cout << tras.size() << " left on stack" << endl;
	fin.close();
}
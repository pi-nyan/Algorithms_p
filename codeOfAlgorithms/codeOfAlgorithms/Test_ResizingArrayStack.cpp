#include "Test_ResizingArrayStack.h"
void AlgorithmsTest::tResizingArrayStack()
{
	ResizingArrayStack<string> tras;
	ResizingArrayStack<string>::sIterator itr;
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
	cout << itr.hasNext() << endl;
	cout << itr.next() << endl;
	fin.close();
}

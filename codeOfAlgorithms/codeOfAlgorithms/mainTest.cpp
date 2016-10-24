#include "Test_ResizingArrayStack.h"
#include "Test_FixedCapacityStack.h"
#include "Test_FixedCapacityStackOfStrings.h"
#include "Test_AgrStack.h"
#include "Test_AgrQueue.h"
#include "Test_AgrSort.h"
#include <crtdbg.h>


static auto main_ret = 0;

int main()
{
#ifdef _DEBUG
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
// 	AlgorithmsTest::tResizingArrayStack();
// 	AlgorithmsTest::tFixedCapacityStack();
// 	AlgorithmsTest::tFixedCapacityStackOfStack();
// 	AlgorithmsTest::tAgrStack();
// 	AlgorithmsTest::tAgrQueue();
	AlgorithmsTest::tAgrSort();
	return main_ret;
}
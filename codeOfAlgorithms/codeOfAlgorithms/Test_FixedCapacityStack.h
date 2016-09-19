#pragma once
#ifndef TEST_FIXED_CAPACITY_STACK_H
#define TEST_FIXED_CAPACITY_STACK_H

/*模板时,要么声明实现写在一个文件里,要么使用时同时包含h&cpp*/
#include "FixedCapacityStack.h"
#include "FixedCapacityStack.cpp"

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

namespace AlgorithmsTest
{
	void tFixedCapacityStack();
}


#endif
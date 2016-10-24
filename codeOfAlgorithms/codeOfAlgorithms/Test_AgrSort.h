#pragma once
#ifndef TEST_AGR_SORT_H
#define TEST_AGR_SORT_H
#include "AgrSort.h"
#include <vector>
#include <iostream>

namespace AlgorithmsTest
{
	void tAgrSort()
	{
		std::vector<int> veci = { 3,1,12,4,8,6,11,15,2,5,13,10,14,7,9 };
		AgrSort::selectionSort(veci);
		for (auto& x : veci)
			std::cout << x << " ";
		std::cout << std::endl;

		std::vector<int> vecs = { 3,1,12,4,8,6,11,15,2,5,13,10,14,7,9 };
		AgrSort::selectionSort(vecs);
		for (auto& x : vecs)
			std::cout << x << " ";
		std::cout << std::endl;

		std::vector<int> vecsh = { 3,1,12,4,8,6,11,15,2,5,13,10,14,7,9 };
		AgrSort::shellSort(vecsh);
		for (auto& x : vecsh)
			std::cout << x << " ";
		std::cout << std::endl;

		std::vector<int> vecm = { 3,1,12,4,8,6,11,15,2,5,13,10,14,7,9 };
		AgrSort::mergeSort(vecm);
		for (auto& x : vecm)
			std::cout << x << " ";
		std::cout << std::endl;

	}
}
#endif
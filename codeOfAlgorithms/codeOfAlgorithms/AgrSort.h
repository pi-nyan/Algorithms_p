#pragma once
#ifndef ARG_SORT_H
#define ARG_SORT_H
#include <vector>

namespace AgrSort
{
	template<typename T>
	void selectionSort(std::vector<T>& _vec)		//—°‘Ò≈≈–Ú
	{
		for (auto i = 0; i < _vec.size(); i++)
		{
			auto _min = i;
			for (auto j = i + 1; j < _vec.size(); j++)
			{
				if (_less(_vec[j], _vec[_min]))
				{
					_min = j;
				}
			}
			_exchange(_vec[i], _vec[_min]);
		}

	}

	template<typename T>
	void insersionSort(std::vector<T>& _vec)		//≤Â»Î≈≈–Ú
	{
		for (auto i = 1; i < _vec.size(); i++)
		{
			for (auto j = i; j > 0 && _less(_vec[j], _vec[j - 1]), j--)
			{
				_exchange(_vec[j], _vec[j - 1])
			}
		}
	}

	template<typename T>
	void shellSort(std::vector<T>& _vec)			//œ£∂˚≈≈–Ú
	{
		auto _h = 1;
		while (_h < _vec.size() / 3)
		{
			_h = 3 * _h + 1;
		}
		while (_h >= 1)
		{
			for (auto i = _h; i < _vec.size(); i++)
			{
				for (auto j = i; j >= _h && _less(_vec[j], _vec[j - _h]); j -= _h)
				{
					_exchange(_vec[j], _vec[j - _h]);
				}
			}
			_h /= 3;
		}
	}

	template<typename T>
	void mergeSort(std::vector<T>& _vec)			//πÈ≤¢≈≈–Ú
	{
		std::vector<T> _vecu(_vec);
		for (auto i = 1; i < _vec.size(); i = i + i)
		{
			for (int lo = 0; lo < _vec.size() - i; lo += i + i)
			{
				_merge(_vecu, _vec, lo, lo + i - 1, _min(lo + i + i - 1, _vec.size() - 1));
				_vecu = _vec;
			}
		}
	}

	template<typename T>
	inline bool _less(T& _tFstOne, T& _tSecOne)
	{
		return _tFstOne < _tSecOne ? true : false;
	}

	template<typename T>
	inline void _exchange(T& _tFstOne, T& _tSecOne)
	{
		T tmp;
		tmp = _tFstOne;
		_tFstOne = _tSecOne;
		_tSecOne = tmp;
	}

	template<typename T>
	inline void _merge(std::vector<T>& _vecu, std::vector<T>& _vec, int lo, int mid, int hi)
	{
		int i = lo, j = mid + 1;

		for (int k = lo; k <= hi; k++)
		{
			if (i > mid)							_vec[k] = _vecu[j++];
			else if (j > hi)						_vec[k] = _vecu[i++];
			else if (_less(_vecu[i], _vecu[j]))		_vec[k] = _vecu[i++];
			else									_vec[k] = _vecu[j++];
		}
	}

	inline int _min(int _a, int _b)
	{
		return _a < _b ? _a : _b;
	}
}

#endif
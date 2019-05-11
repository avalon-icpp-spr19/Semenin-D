#pragma once
#include"Level1.hpp";
namespace lev4
{
	int sov(lev1::Date * arr, int col)
	{
		int n = 0;
		for (int i = 0; i < col; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if ((arr[i].date == arr[j].date) && (arr[i].month == arr[j].month)
					&& (i != j))
				{
					n = 1;
					break;
				}
			}
			if (n == 1)
			{
				break;
			}
		}
		return n;
	}
	float test(int col, int it)
	{
		float percent = 0;
		float num = 0;
		for (int i = 0; i < it; ++i)
		{
			lev1::Date *arr = new lev1::Date[col];
			for (int j = 0; j < col; ++j)
			{
				arr[j] = lev1::randomDate();
			}

			num += sov(arr, col);
			delete[] arr;
		}
		percent = num / it*100;
		return percent;
	}

}

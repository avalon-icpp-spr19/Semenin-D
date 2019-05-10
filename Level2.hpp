#pragma once
#include"Level1.hpp";

namespace lev2
{
	int threeDays()
	{
		int res=0;
	lev1::	Date arr[23];
		for (int i = 0; i < 23; ++i)
		{
			arr[i] =lev1:: randomDate();
	    }
		for (int i = 0; i < 23; ++i)
		{
			for (int j = 0; j < 23; ++j)
			{
				if ((arr[i].date == arr[j].date) && (arr[i].month == arr[j].month)
					&& (i != j))
				{
					for (int m = 0; m < 23; ++m)
					{
						if ((arr[i].date == arr[m].date) && (arr[i].month == arr[m].month)
							&& (i != m))
						{
							res = 1;
							break;
						}
						if (res == 1)
						{
							break;
						}
					}
				}
				if (res == 1)
				{
					break;
				}
			}
		}
		return res;
	}
}
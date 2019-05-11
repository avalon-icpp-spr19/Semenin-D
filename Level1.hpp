#pragma once
#include"Random.hpp";
namespace lev1
{
	
	struct Date
	{
		int year;
		int month;
		int date;
	};
	Date randomDate()
	{
		Date day;
		bool res, leap;
		res = false;
		while (res == false)
		{
			day.date = ext::GetRandomValue(1, 31);
			day.month = ext::GetRandomValue(1, 12);
			day.year = ext::GetRandomValue(1900, 2019);


			if ((day.year % 400 == 0) || ((day.year % 4 == 0) &&
				(day.year % 100 != 0)))
			{
				leap = true;
			}
			else
			{
				leap = false;
			}
			int monthn = day.month % 2;
			int daymax;
			switch (monthn)
			{
			case 1:
				daymax = 30;
				if (day.month == 8)
				{
					daymax = 31;
				}
				break;
			case 0:
				daymax = 31;
				if (day.month == 2)
				{
					daymax = 28;
				}
				break;
			}
			if ((leap) && (day.month == 2))
			{
				daymax = 29;
			}
			res = (day.date <= daymax) && (day.month <= 12);
		}
		return day;
	}
	int grupp()
	{
		int n = 0;
		Date arr[23]{};
		for (int i = 0; i < 23; ++i)
		{
			arr[i] = randomDate();
		}
		for (int i = 0; i < 23; ++i)
		{
			for (int j = 0; j < 23; ++j)
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
}
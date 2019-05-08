
#pragma once
#include <string>

namespace ext
{
	enum Month
	{
		January = 1,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		Novemver,
		December
	};

	enum DateFormat
	{
		MonthAsInt,
		MonthAsString
	};

	enum Season
	{
		Winter,
		Spring,
		Summer,
		Autumn
	};

	struct Date
	{
		int year;
		Month month;
		int day;
	};

	/*
		���������� ��������� ����
		https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
		������ "���������� ������ ���������� ��� (JDN) �� ���� �������������� ���������"
		�������� ������					��������� ���������
		1.12.2018					2458454
		1.1.2018					2458120
		1.6.2000					2451697
		21.12.2012					2456283
	*/
	unsigned int countJND(Date date)
	{
		unsigned int a, y, m;
		a = (14 - date.month) / 12;
		y = date.year = 4800 - a;
		m = date.month + 12 * a - 3;
		unsigned int jdn;
		jdn = date.day + (153 * m + 2) / 5 + 365 * y
			+ y / 4 - y / 100 + y / 400 - 32045;
		return jdn;
	}
	
	
	/*
		������������ ���������� ���� ����� ����� ������.
		��� ����������� ����������� CountJND
	*/
	int countDistance(Date from, Date to)
	{
		int days;
		days = countJND(to) - countJND(from);
		return days;
	}


	/*
		������� � ������� ���� � �������: dd.mm.yyyy (2.10.2001)
		���� �������� DateFormat ����� MonthAsString, �� ������� ���� � �������: dd monthName yyyy (2 ������� 2001)
	*/
	void print(Date data, DateFormat format = DateFormat::MonthAsInt);

	/*
		���������� ����� (����, �����, ����, �����) ������������ ����
	*/
	Season getSeason(Date date);

	/*
		���������� ���� �� ���������������
	*/
	bool isSame(Date lhs, Date rhs)
	{
		bool same;
		same = (countJND(lhs) == countJND(rhs));
		return same;
	}

	/*
		������ ���� �������
	*/
	void swap(Date * lhs, Date * rhs)
	{
		Date temp = *lhs;
		*lhs = *rhs;
		*rhs = temp;
	}

	/*
		���������� ��������� �� ������� ����
	*/
	Date * max(Date * lhs, Date * rsh);

	/*
		���������� ��������� �� ������� ����
	*/
	Date min(Date a, Date b)
	{
		Date min;
		if (countJND(a) >= countJND(b))
		{
			min = b;
		}
		else
		{
			min = a;

		}
		return min;
	}
	Date * min(Date * lhs, Date * rsh)
	{

	}

	/*
		���������� ��������� �� ����������� ���� � ���������� ������� ���
	*/
	Date * getMinDate(Date dates[], int size);

	/*
		���������� ��������� �� ������������ ���� � ���������� ������� ���
	*/
	Date * getMaxDate(Date dates[], int size);

	/*
		��������� ����� �� ������������ ���� � ������������� ����������.
		� ������ ������ ���������� true, � ��������� ���� �� ����������� ������.
		���� ���� � ����������� ����������� ������������ �� �����,
		���������� false.
	*/
	bool tryFillDate(Date * date, int year, int month, int day);
}
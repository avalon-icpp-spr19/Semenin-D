#include<iostream>
#include"Date.hpp"
/*
������� �1
�������� �������, ������� ������� � ������� ���� ������ 10 ����������� �����.
�������� � ���������� ������ �������� n, ����� ��� �������� ���� n ������ ������ ����������� �����.*/

/*void square(int n)
{
	for (int i = 0;i < n;++i)
	{
		std::cout << i * i * i;
	}
}*/
/*������� �2
�������� �������, ������� ��������� ����� ��������.
�� ����������� ������ ���� ����� � ������, ������� �������� � ����������.*/
/*float space(float R,float high)
{
	int space;
	space = high*3.14*R*R;
	return space;
}*/
/*������� �3
�������� ������� min(a, b), ����������� ������� ���� �����.
����� �������� ������� min4(a, b, c, d), ����������� ������� 4 ����� � ������� ������� min.
�������� ������ ����� ����� �� ������� � �������� �� �������.
�������� ������				��������� ���������
1 2 3 4						1
4 3 2 1						1
9 5 1 7						1
7 3 5 9						3*/
/*int min(int a, int b)
{
	int min;
	if (a >= b)
	{
		min = b;
	}
	else
	{
		min = a;

	}
	return min;
}
int min4(int a, int b, int c, int d)
{
	int low;
	low = min(min(a, b), min(c, d));

	return low;
}
int main()
{
	int a, b, c, d;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
std::cout<<	min4(a, b, c, d);
}*/
/*������� �4
�������� � ������ ���� Date.hpp
����������� ������� ������� ��������� � ����� Date.hpp
��� ���������� ������� ����� ������������ ���� ��������������� �������.
������������������ ������ ���� ���������� ������� � main().*/
int main()
{
	Date date,date2;
	std::cout<<countJND(date);
	std::cout << countDistance(date, date2);
}
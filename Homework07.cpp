#include<iostream>
#include"Extention.hpp"
/*
������� �1
int val = 10;
�������� ����� ���������� val
�������� ��������� ��� �������� ������ ���������� val
��������� ����� ���������� val � ��������� ���������
�������� �������� ���������� val, ��������� ���������
����� ��������� ��������� ����������:
unsigned int a = 5U;
double b = 0.8;
const float f = 0.5F;
const long long ll = 123LL;
�������� � ������������������ ��������� �� ��������������� ����������.
����� ������ ����� ����������� ���������? ��������� � ������� ��������� sizeof
� ������� ����������� ����������:
��������� �������� ���������� a �� 1
��������� ���������� b �������� 0.25
�������� ��������� �������� ���������� f
�������� ���������� ������� �� ������� �� 10 ���������� ll
*/
/*int main()
{
	int val = 10;
	std::cout << &val << std::endl;
	int *ptr = &val;
	std::cout << *ptr << std::endl;
	unsigned int a = 5U;
	unsigned int *pa = &a;
	std::cout << sizeof(pa);
	double b = 0.8;
	double *pb = &b;
	std::cout << sizeof(pb);
	const float f = 0.5F;
	const float *pf = &f;
	std::cout << sizeof(pf);
	const long long ll = 123LL;
	const long long *pll = &ll;
	std::cout << sizeof(pll);
	*pa = *pa++;
	*pb = 0.25;
	std::cout << *pf * 2;
	std::cout << *pll % 10;
}*/
/*������� �2
��� ������� �� ����� ��������� ���? -1
��������������� ������ ������, �������� ������������� �������� ����������.
#include <iostream>// ����������� ���������� ��� ������ � ������ � �������
using namespace std;//������������� ������� ������ std
int main()
{
int t[4] = {8,4,2,1};//���������� �������
int *p1 = t + 2, *p2 = p1 - 1;//���������� ��������� ��� �������� ������� � ��������� 2,���������� ��������� ��� �������� ������� � ��������� 4
p1++;//����������� � �������� 1
cout << *p1 - t[p1 - p2] << endl;
}
int data[] = {1,2,3,4,5};
�������� ��������� �� ������ ������� �������
� ������� ����� for � ����������� ��������� �������� ������ ������� ������� � �������.
� ������� ����� for � ����������� ��������� ��������� ������ ������� ������� � 2 ����
� ���������� ����� ������������ ��������� �������.
�������� ���������� ���������.*/
/*int main()
{
	int data[] = { 1,2,3,4,5 };
	int *ptr = &data[0];
	for (int i = 0; i < 5; ++i)
	{
		std::cout << *(ptr + i) << std::endl;
	}
	int summ=0;
	for (int i = 0; i < 5; ++i)
	{
		*(ptr + i) = *(ptr + i) * 2;
		summ += *(ptr + i);
	}
	std::cout << summ;
}*/
/*������� �3
1.	������������� ������ �� 20 ��������� ��������� �� ��������� [-100, 100].
2.	�������� ��������� �� ������ ������� �������.
3.	� ������� ����� for � ������������ ��������� �������� ������ � �������.
4.	��������� �������������� ��������� ������� ������������ ������� �������.
5.	�������� ��� ������ � ��������. (��� ������ ������� ������������ ���������� ����������).
��� ������ ������� ������������ ���������, ��������� ���������� � ��������� ������� �� ��������.
*/
/*int main()
{
	int arr[20];
	for (int i = 0; i < 20; ++i)
	{
		arr[i] = ext::GetRandomValue(-100, 100);
	}
	int *ptr = &arr[4];
	ptr = ptr - 4;
	for (int i = 0; i < 20; ++i)
	{
		std::cout << *(ptr + i) << std::endl;
	}
	int *max = ptr;
	for (int i = 0; i < 5; ++i)
	{
		if (*(ptr + i) > *max)
		{
			*max = *(ptr + i);
		}
	}
	std::cout << max - ptr<<std::endl;
	std::cout << *max;
}*/
/*������� �4
����� ����� ��������� ���������� ������, ��������������������� ��������� ���������.
�������� const char data[] = "abcdefghijklmnopqrstuvwxyz";
������������ ������ � ���������� ���� ������.
���������� ������� �������, �� ������� ��������� ������������� ������ ���������� ������ ���.
���� ���������� ������� � ������ ��� ������� -1.
�������� ������			��������� ���������
d				4
z				26
!				-1*/
/*const char data[] = "abcdefghijklmnopqrstuvwxyz";
int main()
{
	int res=-1;
	char letter;
	std::cin >> letter;
	//int *ptr = [0] ;
	for (int i = 0; i < 26; ++i)
	{

	}
}*/
/*
������� �5
�������� ���������, ������� ���������� ��� ������, ������� ������ ������������.
��������� ����������� �����������.
���� ��������� ������ �����, ������� 1, ���� ������ �� ����� ������� 0.
������ ����� ���� ������ ��������. ������ ��������� ������ �� ����� ��������� 256 ��������.
������, ��������� ������������� ����� �������� ��������� �������:
#include <iostream>
using namespace std;
int main()
{
char line[256];
cin.getline(line, 256);
}
*/
int main()
{
	char line1[256];
	std::cin.getline(line1, 256);
	char line2[256];
	std::cin.getline(line2, 256);
	char *ptr1 = line1;
	char *ptr2 = line2;
	int n = 1;
	while ((*ptr1 != '\0') || (*ptr2 != '\0'))
	{
		if (*ptr1 != *ptr2)
		{
			n = 0;
		}
		++ptr1;
		++ptr2;
	}
}
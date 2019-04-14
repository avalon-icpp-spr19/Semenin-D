#include<iostream>
#include"Extention.hpp"
/*
������� �1
������� ��������� Point, ���������� ��� ���� x, y ���� float.
������� � ������������������� ���������� ���� Point.
������� ���������� ���� Point � ������������������� �� ������� � ����������.
������� �� ����� �������� x, y ��������������� ����������.
�������� ���������, ������� ����������� ����������� �� �������� ����� ����� ��������� �������.
���������� ����� � ������ ������������ ������ � ����������.
��� �������� ��������� ����� ������������ ��������� Point.
�������� ���������, ������� �� ���� �������� ������ - ������ ������� ������� ����� �������� �������.
���������� ����� ������������ ������ � ����������.
��� �������� ��������� ����� ������������ ��������� Point.
������������ ����� �������� ������� ����� ������� ��� ��������� Point.
������� ���������� ���������� ����� � �������.*/

struct Point
{
	float x;
	float y;
};
/*
int main()
{
Point num = { 5,15 };
Point numer;
std::cin >> numer.x >> numer.y;
std::cout << numer.x << " " << numer.y << std::endl;
int R;
std::cin >> R;
if (numer.x*numer.x +numer. y*numer.y <= R*R)
{
std::cout << "Lay in a circle"<<std::endl;
}
Point start, stop,middle;
std::cin >> start.x >> start.y;
std::cin >> stop.x >> stop.y;
middle.x = (stop.x - start.x)/2;
middle.y = (stop.y - start.y)/2;
std::cout << middle.x << " " << middle.y << std::endl;
}
*/

/*������� �2
������� ��������� Circle, ���������� ���� ���� ���� int - ������ � ������ ���� ���� Point - ����� ����������.
������� � ������������������� ���������� ���� Circle.
������� ���������� ���� Circle � ������������������� �� ������� ���������� � ����������.
������� �� ����� ������, ����������� � ��������������� ����������.
���� ��� ���������� ���� Circle.
�������� ���������, ������� ���������� ������������ �� ����������,
��������� ������� �����������.*/
struct Circle
{
	int R;
	Point point;
};
/*int main()
{
Circle C1, C2;
std::cin >> C1.R >> C1.point.x >> C1.point.y;
std::cout << C1.R << C1.point.x << C1.point.y;
std::cin >> C2.R >> C2.point.x >> C2.point.y;
Point dif;
dif.x = abs(C1.point.x - C2.point.x);
dif.y = abs(C1.point.y - C2.point.y);
int n = 0;
if (C1.R + C2.R>dif.x)
{
n = 1;
}
if (C1.R + C2.R>dif.y)
{
n = 1;
}
switch (n)
{
case 1:std::cout << "Crossing";
break;
default:std::cout << "Not crossing";
break;
}
}*/

/*������� �3
������� ������������ (enum) Color, ��� �������� 7 ������ ������.
������� ��������� Triangle, ���������� ���� ���� Color
� ������ ��� �������� ���� ��������� ���� int (����� ������).
������� � ������������������� ���������� ���� Triangle ����������� �������.
������� �� ����� ������, ����������� � ��������������� ����������.
�������� ���� Color ������� � ��������� ����. (������������ ����������� switch).
���������� � ������� �� ����� �������� ���������������� ������������.*/
enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Azure,
	Blue,
	Purple
};
struct Tiangle
{
	Color color;
	int len[3];
};
const char ARR[][10] = { "Red","Orange","Yellow","Green","Azure","Blue","Purple"};
/*int main()
{
Tiangle troa = { Color::Green,{3,4,5} };
switch (troa.color)
{
case 0: std::cout << arr[0];
break;
case 1: std::cout << arr[1];
break;
case 2: std::cout << arr[2];
break;
case 3: std::cout << arr[3];
break;
case 4: std::cout << arr[4];
break;
case 5: std::cout << arr[5];
break;
case 6: std::cout << arr[6];
break;
}
}
*/
/*������� �4
������� ������ �� 20 ��������� ���� Point.
������������������� ��� ������� �� ���������� ���������� ��������� � �������� �� 0 �� 100.
�������� �� ����� ����������:
- ����� � ���������� x �����������
- ���� �����, ���������� ����� �������� ����������.*/
/*int main()
{
Point arr[20];
for (int i = 0; i < 20; ++i)
{
arr[i].x = ext::GetRandomValue(0, 100);
arr[i].y = ext::GetRandomValue(0, 100);
}
Point min = { 0,0 };
for (int i = 0; i < 20; ++i)
{
if (arr[i].x < min.x)
{
min.x = arr[i].x;
min.y = arr[i].y;
}
}
std::cout << min.x << " " << min.y << std::endl;
int len = 0;
for (int i = 0; i < 20; ++i)
{
for (int j = 0; j < 20; ++j)
{
if (len > sqrt(pow((arr[i].x - arr[j].x), 2)) + pow((arr[i].y - arr[j].y), 2))
{
len = sqrt(pow((arr[i].x - arr[j].x), 2)) + pow((arr[i].y - arr[j].y), 2);
}
}
}
std::cout << len;
}*/
/*������� �5
������� ������ �� 100 ��������� ���� Triangle.
������������������� ��� ���������� ���������� (����� ������� �� 1 �� 10).
��� ������������� ���������, ��� ����������� � ������ ������� ������ ����� ������������.
(����� ������ ������� ������ ���� ������ ������ ���� ����� ���� ������ ������).
���������� ���������� ������ ������������� � ������� �� ����� ��������� ����������:
- ������� �� ����� ��� ������������, �������� ������� ��������� ��������, ��������� � ����������.
���� ���������� ������������� ���, ������� ��������������� ���������.
- ���������� ������������� ������� �����*/
/*int main()
{
	Tiangle arr[100];
	int n = 0;
	for (int i = 0; i < 100; ++i)
	{
		while (n == 0)
		{
			arr[i].len[0] = ext::GetRandomValue(1, 10);
			arr[i].len[1] = ext::GetRandomValue(1, 10);
			arr[i].len[2] = ext::GetRandomValue(1, 10);
			if ((arr[i].len[0] + arr[i].len[1] > arr[i].len[2])
				&& (arr[i].len[0] < arr[i].len[1] + arr[i].len[2])
				&&(arr[i].len[0]+ arr[i].len[2]>arr[i].len[1]))
			{
				n = 1;
			}
		}
		int temp;
		temp = ext::GetRandomValue(1, 7);
		switch (temp)
		{
			case 1:	arr[i].color = Color::Red;
					break;
			case 2:	arr[i].color = Color::Orange;
				break;
			case 3:	arr[i].color = Color::Yellow;
				break;
			case 4:	arr[i].color = Color::Green;
				break;
			case 5:	arr[i].color = Color::Azure;
				break;
			case 6:	arr[i].color = Color::Blue;
				break;
			case 7:	arr[i].color = Color::Purple;
				break;

		}
		n = 0;
	}
	int P;
	std::cin >> P;
	for (int i = 0; i < 100; ++i)
	{
		if (arr[i].len[0]+ arr[i].len[1] + arr[i].len[2]>P)
		{
			std::cout << arr[i].len[0]<<" " << arr[i].len[1]<<" "
				<< arr[i].len[2] << std::endl;
			n = 1;
		}
	}
	if (n==0)
	{
		std::cout << "No triangles"<<std::endl;
	}
	int colr[7]{};
	for (int i = 0; i < 100; ++i)
	{
		++colr[arr[i].color];
	}
	for (int i = 0; i < 7; ++i)
	{
		switch (i)
		{
		case 0: std::cout<<ARR[0];
			break;
		case 1: std::cout << ARR[1];
			break;
		case 2: std::cout << ARR[2];
			break;
		case 3: std::cout << ARR[3];
			break;
		case 4: std::cout << ARR[4];
			break;
		case 5: std::cout << ARR[5];
			break;
		case 6: std::cout << ARR[6];
			break;
		}
		std::cout << " - " << colr[i] << std::endl;
	}
}*/
/*������� �6
�������� ���������, ������� ��������� ������������ �������� �������� ����.
���� ������� � �������������� ���������.
�������� ������				��������� ���������
1 1 1992					���� ���������
30 6 1992					���� ���������
31 7 1992					���� ���������
31 9 1994					���� �����������
32 1 1992					���� �����������
1 13 1992					���� �����������
29 2 1993					���� �����������
29 2 2004					���� ���������
29 2 1900					���� �����������
29 2 2000					���� ���������
*/
struct Date
{
	int day;
	int daymax;
	int month;
	int year;
};
int main()
{
	Date date;
	std::cin >> date.day;
	std::cin >> date.month;
	std::cin >> date.year;
	bool res, leap;
	int monthn;
	if ((date.year % 400 == 0) || ((date.year % 4 == 0) && (date.year % 100 != 0)))
	{
		leap = true;
	}
	else
	{
		leap = false;
	}
	monthn = date.month % 2;
	switch(monthn)
	{
	case 1:
		date.daymax = 30;
			if (date.month == 8)
			{
				date.daymax = 31;
			}
			break;
		case 0:
			date.daymax = 31;
				if (date.month == 2)
				{
					date.daymax = 28;
				}
				break;
	}
	if ((leap)&&(date.month==2))
	{
		date.daymax = 29;
	}
	res = (date.day<= date.daymax) && (date.month <= 12);
	if (res)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
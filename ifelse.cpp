#include<iostream>
/* ������� 1
���� ��� ����������� ����� A, B, C. ����������, ���������� �� ����������� � ������ ���������.
���� ����������� ����������, �������� ������ ��, ����� �������� ������ ���.
����������� � ��� ��� �����, �� ������� �� ����� ������.
�������� ������				��������� ���������
1 1 1						��
1 2 4						���
12 7 5						���
7 10 3						���
4 5 8						��
*/
//int main()
//{
//	setlocale(LC_ALL, "");
//	int a, b, c;
//	std::cin >> a;
//	std::cin >> b;
//	std::cin >> c;
//	if ((a + b > c)&&(c+b>a)&&(c+a>b)&&(a-b<c)&&(a-c<b)&&(b-c<a)&&(b-a<c)&&(c-a<b)&&(c-b<a))
//	{
//		std::cout << "��";
//	}
//	else
//	{
//		std::cout << "���";
//	}
//}
/* ������� 2
�������� ���, ��������� ���������� ��������������� ������� ��������� �� ��������� ������������.
��������, ��� 10, ������� ���������� �������, ��� 1 � �������, ��� 2 � �������.
������������ ����������� switch.
�������� ������			��������� ���������
1					�����
2					�����
10					������
101					�����
1255					������
*/
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num;
//	std::cin >> num;
//	num = num % 10;
//	switch (num)
//	{
//	case 1:
//		std::cout << "�����";
//		break;
//		case 2:
//			std::cout << "�����";
//			break;
//		default:
//			std::cout << "������";
//			break;
//	}
//}
/* ������� 3
� ����������� ���� ����� � ������ ������������� � ������ ��� ����� ��� ���������� ������ �������:
// �������� ������, �������� � ����������.
// true ��� 1, false ��� 0
bool enemyInFront;
bool isBoss;
int robotHealth;
// ��� ����
bool shouldFire = true;
if (enemyInFront == true)
{
if (isBoss == true)
{
if (robotHealth < 50) shouldFire = false;
if (robotHealth > 100) shouldFire = true;
}
}
else
{
shouldFire = false;
}
if(shouldFire)
{
cout << "Fire" << endl;
}
��������� ��� ����, ������ ���������� �������� ���������.
�������� ������		��������� ���������
false false 10
false true 60
true false 10			Fire
true true 10
true true 60			Fire
*/
//int main()
//{
//	bool fire, boss, enemy;
//	std::cin >> enemy;
//	std::cin >> boss;
//	int health;
//	std::cin >> health;
//	fire = true;
//	if (enemy == true)
//	{
//		if (boss == true)
//		{
//			if (health < 50)
//			{
//				fire = false;
//			}
//		}
//	}
//	else
//	{
//		fire = false;
//	}
//	if (fire == true)
//	{
//		std::cout << "Fire";
//	}
//	else
//	{
//		std::cout << "";
//	}
//}
/* ������� 4
�� � ����� � ����� ������ ������� ����� ������ ���������� ������� � ���������.
��� ����� ������ ���������� ������ �� ��� ������ �� ����������� �����.
�����������, ��� �� ����� ������ � ���, ��� �� ���� ������ �������� ���� ���������.
�� ����������, ��� ������ �� ��� ������ ������� ������ ����������� ������ ������.
������� ���� ������ � �������� ��������� ������ ����� �� ������� ��������������, � �������, �� ���� ������ �������� ������������ � ����������� ������.
���� ����� ������ ��� ������ ������� ������ �� ����, �� ��������� � if - ��, � ������� ����������� ��� ������ ���.
���������� �� ������ ������ ������, �� � �������������� ���������� �������� � ����������� ��������� ������� ��������.
�������� ������		��������� ���������
1 2 3				2
5 5 5				5
2 2 9				2
1 5 5				5
4 5 6				5
*/
//int main() 
//{
//	int num1, num2, num3;
//	std::cin >> num1;
//	std::cin >> num2;
//	std::cin >> num3;
//	bool c1, c2, c3;
//	c1 = num1 > num2;
//	c2 = num1 > num3;
//	c3 = num2 > num3;
//	if (c3 == 1)
//	{
//		if (c1 == 1)
//		{
//			std::cout << num2;
//		}
//		else
//		{
//			if (c2 == 1)
//			{
//				std::cout << num1;
//			}
//			else
//			{
//				std::cout << num3;
//			}
//		}
//	}
//	else
//	{
//		if (c2 == 1)
//		{
//			std::cout << num3;
//		}
//		else
//		{
//			if (c1 == 1)
//			{
//				std::cout << num1;
//			}
//			else
//			{
//				std::cout << num2;
//			}
//		}
//	}
//
//	}
/* ������� 5
�������� ������, ������� ��������� ����������� ������������� ���� �� ��������� ������������� ������.
������������ ������ ������ � ������� ����, �����, ���.
�������� ������				��������� ���������
1 1 1992					true
30 6 1992					true
31 7 1992					true
31 9 1994					false
32 1 1992					false
1 13 1992					false
29 2 1993					false
29 2 2004					true
29 2 1900					false
29 2 2000					true
*/
//int main()
//{
//	int day,daymax, month,monthn, year;
//	std::cin >> day;
//	std::cin >> month;
//	std::cin >> year;
//	bool res, leap;
//	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
//	{
//		leap = true;
//	}
//	else
//	{
//		leap = false;
//	}
//	monthn = month % 2;
//	switch(monthn)
//	{
//	case 1:
//			daymax = 30;
//			if (month == 8)
//			{
//				daymax = 31;
//			}
//			break;
//		case 0:
//				daymax = 31;
//				if (month == 2)
//				{
//					daymax = 28;
//				}
//				break;
//	}
//	if ((leap == 1)&&(month==2))
//	{
//		daymax = 29;
//	}
//	res = (day<=daymax) && (month <= 12);
//	if (res == 1)
//	{
//		std::cout << "true";
//	}
//	else
//	{
//		std::cout << "false";
//	}
//}
/* ������� 6
��������� ����� ����� �� ���������, ����������� ��� ���������.
���� ��� ��������� ������ ��������� �����, �������� ������, ������� ����������
����� �� ����� ������� � ������ ������ �� ������ ����� �����.
������ ���������� � 1. ������������ ������ ���������� ��������� � �������� ������ � ������� x1x2.
x1 - ����� ������ �� �����������, x2 - ����� ������ �� ���������
�������� ������				��������� ���������
54 14						true
11 88						true
36 61						false
18 71						false
23 67						true
*/
int main()
{
	int xs, ys, xf, yf;
	int num;
	std::cin >> num;
	xs = num / 10;
	ys = num % 10;
	std::cin >> num;
	xf = num / 10;
	yf = num % 10;
	int difx, dify;
	difx = xf - xs;
	dify = yf - ys;
	bool var;
	if (difx == 0)
	{
		if(dify ==0)
		{
			var=false;
		}
		else
		{
			var=true;
		}
	}
	else
	{
		if (dify == 0)
		{
			var=true;
		}
		else
		{
			var=false;
		}
	}
	if((difx == dify) || (difx == -dify))
	{
		var = true;
	}
	if (var == true)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}
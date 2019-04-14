#include<iostream>
#include"Extention.hpp"
/*
Задание №1
Создать структуру Point, содержащую два поля x, y типа float.
Создать и проинициализировать переменную типа Point.
Создать переменную типа Point и проинициализировать ее данными с клавиатуры.
Вывести на экран значения x, y вышеобъявленных переменных.
Написать программу, которая определеяет принадлежит ли заданная точка кругу заданного радиуса.
Координаты точки и радиус пользователь вводит с клавиатуры.
Для хранения координат точки использовать структуру Point.
Написать программу, которая по двум заданным точкам - концам отрезка находит точку середины отрезка.
Координаты точек пользователь вводит с клавиатуры.
Для хранения координат точек использовать структуру Point.
Рассчитанную точку середины отрезка также хранить как структуру Point.
Вывести координаты полученной точки в консоль.*/

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

/*Задание №2
Создать структуру Circle, содержащую одно поле типа int - радиус и второе поле типа Point - центр окружности.
Создать и проинициализировать переменную типа Circle.
Создать переменную типа Circle и проинициализировать ее данными введенными с клавиатуры.
Вывести на экран данные, сохраненные в вышеобъявленных переменных.
Даны две переменные типа Circle.
Написать программу, которая определяет пересекаются ли окружности,
описанные данными переменными.*/
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

/*Задание №3
Создать перечисление (enum) Color, для хранения 7 цветов радуги.
Создать структуру Triangle, содержащее поле типа Color
и массив для хранения трех элементов типа int (длины сторон).
Создать и проинициализировать переменную типа Triangle корректными данными.
Вывести на экран данные, сохраненные в вышеобъявленной переменной.
Значение поля Color вывести в текстовом виде. (использовать конструкцию switch).
Рассчитать и вывести на экран периметр вышеобъявленного треугольника.*/
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
/*Задание №4
Создать массив из 20 элеметнов типа Point.
Проинициализировать его точками со случайными значениями координат в пределах от 0 до 100.
Выведите на экран координаты:
- точки с наименьшей x координатой
- двух точек, расстояние между которыми минимально.*/
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
/*Задание №5
Создать массив из 100 элементов типа Triangle.
Проинициализировать его случайными значениями (длина стороны от 1 до 10).
При инициализации проверять, что треугольник с такими длинами сторон может существовать.
(Длина каждой стороны должна быть строго меньше длин суммы двух других сторон).
Обработать полученный массив треугольников и вывести на экран следующую информацию:
- вывести на экран все треугольники, периметр которых превышает значение, введенное с клавиатуры.
Если подходящих треугольников нет, вывести соответствующее сообщение.
- количество треугольников каждого цвета*/
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
/*Задание №6
Написать программу, которая проверяет правильность заданных значений даты.
Дату хранить с использованием структуры.
Тестовые данные				Ожидаемый результат
1 1 1992					Дата корректна
30 6 1992					Дата корректна
31 7 1992					Дата коррентна
31 9 1994					Дата некорректна
32 1 1992					Дана некорректна
1 13 1992					Дата некорректна
29 2 1993					Дата некорректна
29 2 2004					Дата корректна
29 2 1900					Дата некоррентна
29 2 2000					Дата корректна
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
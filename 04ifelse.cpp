# include <iostream>
/* Задание 1
Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами.
Если треугольник существует, выведите строку Да, иначе выведите строку Нет.
Треугольник — это три точки, не лежащие на одной прямой.
Тестовые данные				Ожидаемый результат
1 1 1						Да
1 2 4						Нет
12 7 5						Нет
7 10 3						Нет
4 5 8						Да
*/
//int main()
//{
//	setlocale(LC_ALL, "");
//	int a, b, c;
//	std::cin >> a;
//	std::cin >> b;
//	std::cin >> c;
//	if ((a + b > c)&&(c+b>a)&&(c+a>b))
//	{
//		std::cout << "Да";
//	}
//	else
//	{
//		std::cout << "Нет";
//	}
//}
/* Задание 2
Напишите код, правильно склоняющий существительное «рублей» следующее за указанным числительным.
Например, для 10, следует напечатать «рублей», для 1 — «рубль», для 2 — «рубля».
Использовать конструкцию switch.
Тестовые данные			Ожидаемый результат
1					рубль
2					рубля
10					рублей
101					рубль
1255					рублей
*/
//int main()
//{
//	setlocale(LC_ALL, "");
//	int num,chek;
//	std::cin >> num;
//	chek = num;
//	num = num % 10;
//	switch (num)
//	{
//	case 1:if(chek==11)
//	{
//		std::cout << "рублей";
//		break;
//	}
//		std::cout << "рубль";
//		break;
//		case 2:
//		case 4:
//		case 3:
//			if((chek>10)&&(chek<20))
//			{
//				std::cout << "рублей";
//				break;
//			}
//			std::cout << "рубля";
//			break;
//		default:
//			std::cout << "рублей";
//			break;
//	}
//}
/* Задание 3
В воскресенье Вася пошел в кружок робототехники и увидел там такой код управления боевым роботом:
// исходные данные, вводятся с клавиатуры.
// true это 1, false это 0
bool enemyInFront;
bool isBoss;
int robotHealth;
// Код Васи
bool shouldFire = true;
if (enemyInFront )
{
if (isBoss )
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
Упростите код Васи, удалив избыточные условные операторы.
Тестовые данные		Ожидаемый результат
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
//	if (enemy)
//	{
//		if (boss)
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
//	if (fire)
//	{
//		std::cout << "Fire";
//	}
//	else
//	{
//		std::cout << "";
//	}
//}
/* Задание 4
Вы с Васей и Петей решили выбрать самые лучшие фотографии котиков в интернете.
Для этого каждую фотографию каждый из вас оценил по стобалльной шкале.
Естественно, тут же встал вопрос о том, как из трех оценок получить одну финальную.
Вы опасаетесь, что каждый из вас сильно завысит оценку фотографиям своего котика.
Поэтому было решено в качестве финальной оценки брать не среднее арифметическое, а медиану, то есть просто откинуть максимальную и минимальную оценки.
Вася начал писать код выбора средней оценки из трех, но запутался в if - ах, и поэтому перепоручил эту задачу вам.
Попробуйте не просто решить задачу, но и минимизировать количество проверок и максимально упростить условия проверок.
Тестовые данные		Ожидаемый результат
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
//	if (num2 > num3)
//	{
//		if (num1 > num2)
//		{
//			std::cout << num2;
//		}
//		else
//		{
//			if (num1 > num3)
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
//		if (num1 > num3)
//		{
//			std::cout << num3;
//		}
//		else
//		{
//			if (num1 > num2)
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
/* Задание 6
Шахматный ферзь ходит по диагонали, горизонтали или вертикали.
Даны две различные клетки шахматной доски, Написать логику, которая определяет
может ли ферзь попасть с первой клетки на вторую одним ходом.
Клетки нумеруются с 1. Пользователь вводит координаты начальной и конечной клетки в формате x1x2.
x1 - номер клетки по горизонтали, x2 - номер клетки по вертикали
Тестовые данные				Ожидаемый результат
54 14						true
11 88						true
36 61						false
18 71						false
23 67						true
*/
/*int main()
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
	if (!difx )
	{
		if(!dify)
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
		if (!dify)
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
	if (var )
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}*/
/* Задание 5
Написать логику, которая проверяет возможность существования даты по введенным пользователем данных.
Пользователь вводит данные в формате день, месяц, год.
Тестовые данные				Ожидаемый результат
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
/*int main()
{
	int day,daymax, month,monthn, year;
	std::cin >> day;
	std::cin >> month;
	std::cin >> year;
	bool res, leap;
	if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
	{
		leap = true;
	}
	else
	{
		leap = false;
	}
	monthn = month % 2;
	switch(monthn)
	{
	case 1:
			daymax = 31;
			if ((month == 9) || (month == 11))
			{
				daymax = 30;
			}
			break;
	case 0:
				daymax = 30;
				if ((month == 8)|| (month == 10)|| (month == 12))
				{
					daymax = 31;
				}
				if (month == 2)
				{
					daymax = 28;
				}
				break;
	}
	if ((leap)&&(month==2))
	{
		daymax = 29;
	}
	res = (day<=daymax) && (month <= 12);
	if (res)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}*/
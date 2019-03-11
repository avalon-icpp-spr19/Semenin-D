#include<iostream>
#include <string>
/*
Задание 1
Дано N (1 ≤ N ≤ 27).
Найти количество трехзначных натуральных чисел, сумма цифр которых равна N.
Тестовые данные				Ожидаемый результат
1							1
27							1
5							15
10							54
20							36*/
/*int main()
{
	int num, cou,summ;
	std::cin >> num;
	cou = 0;
	for (int i = 100; i < 1000; ++i)
	{
		summ = i % 10 + i / 100 + (i % 100 / 10);
		cou = (num == summ) ? ++cou : cou ;
	}
	std::cout << cou;
}*/
/*Задание 2
Вы решили помочь Васе с разработкой его игры и взяли на себя красивый вывод сообщений в игре.
Напишите программу, которая принимает на вход строку текста
и затем печатает введенную строку на экран в рамочке из символов +, - и |.
Для красоты текст должен отделяться от рамки слева и справа пробелом.
Например, текст Hello world должен выводиться так:
+-------------+
| Hello world |
+-------------+
#include <string>
int main()
{
std::string line;
std::getline(std::cin, line); 	// считывает из консоли сразу целую строку и записываем ее в переменную line
int size = line.size();		// функция возвращает длину строки
}*/
/*int main()
{
	std::string line;
	std::getline(std::cin, line);
	int size = line.size();
	std::cout << "+";
	for (int i = 1; i <= size + 2; ++i)
	{
		std::cout << "-";
	}
	std::cout<<"+" << std::endl;
	std::cout << "|" << " " << line << " " << "|" << std::endl;
	std::cout << "+";
	for (int i = 1; i <= size + 2; ++i)
	{
		std::cout << "-";
	}
	std::cout << "+" << std::endl;
}*/
/*Задание 3
Стали известны подробности про новую игру Васи.
Оказывается ее действия разворачиваются на шахматных досках нестандартного размера.
У Васи уже написан код, генерирующий стандартную шахматную доску размера 8х8.
Помогите Васе переделать этот код так, чтобы он умел выводить доску любого заданного размера.
Например, доска размера 5x5 должна выводиться так:
#.#.#
.#.#.
#.#.#
.#.#.
#.#.#*/
/*int main()
{
	int num,chek;
	std::cin >> num;
	chek = 0;
	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			if (chek % 2 == 0)
			{
				std::cout << "#";
				chek += 1;
			}
			else
			{
				std::cout << ".";
				chek += 1;
			}
		}
		std::cout << std::endl;
		
	}
}
/*Задание 4
Напишите программу, которая принимает у пользователя натуральное число N
и выводит в консоль ромб со стороной N.
Примеры:
N = 1
#
N = 2
#
###
#
N = 4
   #
  ###
 #####
#######
 #####
  ###
   #
   */
int main()
{
	int len,num;
	std::cin >> num;
	if (!(num == 1))
	{
		len = 1 + (2 * (num - 1));
	}
	else
	{
		len = 1;
	}
	int chek;
	chek = (len-1) / 2;
	for (int i = 0; i < len/2; ++i)
	{
		
			for (int m=0;m < chek;++m)
			{
				std::cout << " ";
			}
			for (int j=0;j<len-chek*2;++j)
			{
				std::cout << "#";
			}
			for (int m=0;m < chek;++m)
			{
				std::cout << " ";
			}
			if (chek > 0)
			{
				--chek;
			}
		std::cout << std:: endl;
	}
	for (int i = 0; i <= len / 2; ++i)
	{

		for (int m = 0;m < chek;++m)
		{
			std::cout << " ";
		}
		for (int j = 0;j < len - chek * 2;++j)
		{
			std::cout << "#";
		}
		for (int m = 0;m < chek;++m)
		{
			std::cout << " ";
		}

		++chek;
		std::cout << std::endl;
	}
} 
/*Задание 5 (дополнительно)
Определите симметрично ли введенное пользователем число N
Тестовые данные			Ожидаемый результат
1				Да
12				Нет
565				Да
1235321				Да
12344321			Да
456123				Нет
*/
/*int main()
{
	int num;
	std::cin >> num;
	bool res;
	int len;
	for (int i = 0;i <= len;++i)
	{
		if (num)
		{

		}
	}
}*/
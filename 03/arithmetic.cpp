#include<iostream>
#include<iomanip>
/* Упражнение 1
* Дано целое трехзначное число. Найдите сумму его цифр.
* Тестовые данные			Ожидаемый результат
* 111						3
* 999						27
* 123						6
* 321						6
* 528						15
*/
//int main()
//{
//	int num ;
//	std::cin >> num;
//	int sum;
//	int hund, des, ed;
//	hund = num / 100;
//	des = num % 100 / 10;
//	ed = num % 10;
//	sum = hund + des + ed;
//	std::cout << sum ;
//}
/*
* Упражнение 2
* Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени.
* Известно, что второй момент времени наступил не раньше первого.
* Определите, сколько секунд прошло между двумя моментами времени.
* Тестовые данные			Ожидаемый резульат
* 1 1 1 2 2 2				3661
* 2 20 20 3 20 20			3600
* 23 30 00 23 59 59			1799
*/
//int main()
//{
//	int hour, min, sec, hour1, min1, sec1,res;
//	std::cin>>hour ;
//	std::cin>>min ;
//	std::cin>>sec ;
//	std::cin>>hour1 ;
//	std::cin>>min1 ;
//	std::cin>>sec1 ;
//	sec = hour * 60 * 60 + min * 60+sec;
//	sec1 = hour1 * 60 * 60 + min1 * 60+sec1;
//	res = sec1 - sec;
//	std::cout << res;
//}
/* Упражнение 3
Посчитать Юлианскую дату
Пользователь вводит дату в формате день, месяц, год
Вывести в консоль рассчитанную Юлианскую дату
https://ru.wikipedia.org/wiki/%D0%AE%D0%BB%D0%B8%D0%B0%D0%BD%D1%81%D0%BA%D0%B0%D1%8F_%D0%B4%D0%B0%D1%82%D0%B0
раздел "Вычисление номера юлианского дня (JDN) по дате григорианского календаря"
Тестовые данные				Ожидаемый результат
1 12 2018					    2458454
1 1 2018					    2458120
1 6 2000					    2451697
21 12 2012					  2456283
*/
//int main()
//{
//	int day, month, year, a, y, m, jnd;
//	std::cin >> day;
//	std::cin >> month;
//	std::cin >> year;
//	a = (14 - month) / 12;
//	y = year + 4800 - a;
//	m = month + 12 * a - 3;
//	jnd = day + (153 * m + 2)/5+365*y+y/4-y/100+y/400-32045;
//	std::cout << jnd;
//}
/* Упражнение 4
* Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
* то есть сначала записывается количество часов, потом обязательно двузначное количество минут,
* затем обязательно двузначное количество секунд.
* Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
* Тестовые данные		Ожидаемый результат
* 10					      0:00:10
* 122					      0:02:02
* 1220					    0:20:20
* 12200					    3:23:20
* 86000					    23:53:20
*/
//int main()
//{
//	int input,seced,mindes,mined,secdes,hour;
//	std::cin >> input;
//	secdes = input % 60;
//	hour = input / 60 / 60;
//	mindes = input / 60 % 60;
//	seced = secdes % 10;
//	secdes = secdes / 10;
//	mined = mindes % 10;
//	mindes = mindes / 10;
//	std::cout << hour<<':'<<mindes<<mined<<':'<<secdes<<seced;
//}
/* Упражнение 5
* На вход дается натуральное число N. Выведите следующее за ним четное число
* Тестовые данные		Ожидаемый результат
* 5						6
* 6						8
* 0						2
* 111					112
* 112					114
*/
//int main()
//{
//	int num,plus;
//	std::cin >> num;
//	num / 2 * 2 + 2;
//	num = num + 2;
//	plus = num % 2;
//	num = num - plus;
//	std::cout << num;
//}
/* Упражнение 6
* Дано четырехзначное число. Определите, является ли его десятичная запись симметричной.
* Если число симметричное, то выведите 1, иначе выведите любое другое целое число.
* Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.
* Тестовые данные			Ожидаемый результат
* 2002						1
* 2018						не 1
* 42						  не 1
* 220						  1
* 9999						1
*/
//int main()
//{
//	int num,tous , sot, des, ed;
//	std::cin >> num;
//	tous = num / 1000;
//	sot = num % 1000 / 100;
//	des = num % 100 / 10;
//	ed = num % 10;
//	int ein, zwei,res;
//	ein = tous - ed;
//	zwei = sot - des;
//	res = ein + zwei + 1;
//	std::cout << res;
//}
/* Дополнительное упражнение (будет оцениваться отдельно)
* Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров.
* На какой день улитка доползет до вершины шеста?
* Тестовые данные		Ожидаемый результат
*  H	A	B
* 10	3	2			8
* 11	4	2			5
* 80	7	3			20
*/
int main()
{
	int h, a, b;
	std::cin >> h;
	std::cin >> a;
	std::cin >> b;
	int timeclean = h / a;
	int slow = timeclean*b;
	timeclean = timeclean + h%a;
	int day;

	day = timeclean + slow/a+((slow % a)/( slow % a));
	std::cout << day;
}

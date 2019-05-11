
#include<iostream>
#include"Level4.hpp";
using namespace std;
using namespace lev4;
int main()
{
	setlocale(0, "");
	cout << "Введите желаемый процент:";
	int per;
	cin >> per;
	cout << "Введите колличество симуляций:";
	int colSim;
	cin >> colSim;
	float m = 0;
	int ColMen = 1;
	while (m<per)
	{
		m = test(ColMen, colSim);
		if (m >= per)
		{
			cout << "Указанная вероятность совпадения достигается в группе размером " << ColMen
				<< " человек" << endl;
			
		}
		else
		{
			cout << "В группе размером " << ColMen << " человек, достгается вероятность в "
				<< m << " % " << endl;

		}
		++ColMen;
	}
}

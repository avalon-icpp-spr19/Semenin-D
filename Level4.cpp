
#include<iostream>
#include"Level4.hpp";
using namespace std;
using namespace lev4;
int main()
{
	setlocale(0, "");
	cout << "������� �������� �������:";
	int per;
	cin >> per;
	cout << "������� ����������� ���������:";
	int colSim;
	cin >> colSim;
	float m = 0;
	int ColMen = 1;
	while (m<per)
	{
		m = test(ColMen, colSim);
		if (m >= per)
		{
			cout << "��������� ����������� ���������� ����������� � ������ �������� " << ColMen
				<< " �������" << endl;
			
		}
		else
		{
			cout << "� ������ �������� " << ColMen << " �������, ���������� ����������� � "
				<< m << " % " << endl;

		}
		++ColMen;
	}
}

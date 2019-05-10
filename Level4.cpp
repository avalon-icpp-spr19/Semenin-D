#include<iostream>
#include"Level4.hpp";
using namespace std;
using namespace lev4;
int main()
{
	cout << "Percent";
	int per;
	cin >> per;
	cout << "People";
	int men;
	cin >> men;
	float m=0;
	int col = 1;
	while (true)
	{
		m = test(col, men);
		if (m >= per)
		{
			cout << "On " << col << "person";
			break;
		}
		else
		{
			cout << "On " << col << "   " << m;
		}
		++col;
	}
}
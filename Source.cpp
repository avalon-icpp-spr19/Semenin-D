const float PI = 3.14159;
const int daysinyear = 365;
const int daysinweek = 7;
int main()
{
	/* ���������� ����������.
	* �������� ��������� ����������:
	* 1. ������������� ���������� "�";
	* 2. ����������� ������������� ���������� "b";
	* 3. ������������� ���������� "c", �������� � ��� ���� ������, ��� ��������
	* ���� "int";
	* 4. ������������� ���������� "d", �������� ���� ����;
	* 5. ������������ ���������� "e", �������� 4 �����;
	*/
	int a;
	unsigned int b;
	short int c;
	char d;
	float e;
	/* ������������� ����������.
	* ��������� ������������� ���������� ��������� �������:
	* 1. ��� ���� �������� ���������� "a" ������ ���������� � �������� 0;
	* 2. ��� ���� �������� ���������� "b" ������ ���������� � �������� 1;
	* 3. ���������� "c" ������ ��������� ������ ���� "long long";
	* 4. ���������� "d" ������� ��������� ����������� ��������� �������� ������
	* ����;
	*/
	a = 0b00000;
	b = 0b11111111111111111111111111111111;
	c = sizeof(long long int);
	d = 127;
	/* ������������� ���������� � ������� ���������
	* ��������� ���������� � ������������� ���������� ��������� �������
	* 1. �������� ������������� ���������� � ������������������� �� ���������� ���������;
	* 2. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ����������������� ���������
	* 3. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ������������ ���������� ���������
	* 4. �������� ������������� ����������, �������� � ���� ���� � ������������������� �� �������� ���������
	* 5. �������� ���������� ���� char � ������������������� �� �������� 'f'
	* 6. �������� ����������� ���������� ������ ���� � ������������������� �� ���������� ���������
	* 7. �������� ����������� ������������� ����������, �������� � ��� ���� ������, ��� int � ������������������� �� ���������� ���������
	*/
	int val = 10;
	const short int val2 = 0x12;
	const long long int val3 = 077LL;
	char val4 = 0b11;
	char val5 = 'f';
	float val6 = 25.25F;
	unsigned long long int val7 = 125LL;
	/*
	*	����� ��� ���������� ��� �� ���������� ��� �������� ��������� ����������?
	*		��� �������
	*		������� ������ ������� �����
	*		���������� ����� � ���������
	*		������� ������� ��������� ������� �� ������
	*
	*	�������� ���������� ������������� ����� ���������� ��� �������� ���� ����������
	*/
	char age;
	float square;
	long long int kolvo;
	float middlelevel;
	/*
	*	�������� ���������� ��������� ��� ����� pi, ������� 3.14159
	*	�������� ���������� ���� float � ��������������� ��, ��������� ��������� pi.
	*	�������� ���������� ���������, ������� �������� �������� ���� � ����
	*	�������� ���������� ���������, ������� �������� �������� ���� � ������
	*/
	float num1 = PI;
	/*
	*	��� ���������� ��������� ���������� ����� ������ � ����.
	*	�������� ���������� ����������� ���� � ������������������ �� � ������� ����� ����������� ��������
	*/
	int kolweekinyear = daysinyear / daysinweek;

}
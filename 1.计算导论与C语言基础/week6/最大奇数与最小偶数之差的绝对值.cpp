/*
�����������Сż��֮��ľ���ֵ

����

����6��������������6�������������ٴ���һ��������һ��ż����

����6������������������Ϊa����С��ż��Ϊb�����|a-b|��ֵ

����

����Ϊһ�У�6��������,��6����������С��100

���뱣֤��6���������ٴ���һ��������һ��ż��

���

���Ϊһ�У����������������С��ż��֮��ľ���ֵ
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int oddMax = 0;
	int evenMin = 100;

	for (int i = 0; i < 6; i++)
	{
		int n = 0;
		cin >> n;

		n % 2 == 1 ?
			(n > oddMax ? oddMax = n : 0) :
			(n < evenMin ? evenMin = n : 0);
	}

	cout << abs(oddMax - evenMin) << endl;

	return 0;
}
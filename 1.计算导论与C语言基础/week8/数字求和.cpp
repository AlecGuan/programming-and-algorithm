/*
�������

����

����һ��������a���Լ������5���������������ǣ���5�������У�С��a�������ĺ��Ƕ��٣�

����

����һ�У�ֻ����6��С��100�������������е�һ������������a��

���

���һ�У�����һ������������5������С��a�����ĺ͡�
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int input = 0;
	int sum = 0;

	cin >> a;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (input < a)
		{
			sum += input;
		}
	}

	cout << sum << endl;
}

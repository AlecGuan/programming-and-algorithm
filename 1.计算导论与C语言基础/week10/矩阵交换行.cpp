/*
����

��main�����У� ����һ��5*5�ľ�������������ݣ�������n��m��ֵ���ж�n��m�Ƿ������鷶Χ�ڣ�������ڣ������error������ڷ�Χ�ڣ���n�к�m�н������������n��m����¾���

����

5*5��������ݣ��Լ�n��m��ֵ��

���

������ɽ����������error

����ɽ�����������¾���
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int matrix[5][5];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int n = 0, m = 0;
	cin >> n >> m;
	if (n < 0 || n >= 5 || m < 0 || m >= 5)
	{
		cout << "error" << endl;
		return 0;
	}

	int temp[5];
	for (int i = 0; i < 5; i++)
	{
		temp[i] = matrix[n][i];
		matrix[n][i] = matrix[m][i];
		matrix[m][i] = temp[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}

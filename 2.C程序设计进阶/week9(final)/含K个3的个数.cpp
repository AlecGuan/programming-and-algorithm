/*
����⣣1����k��3����
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
�������������m �� k������1 < m < 100000��1 < k <5 ���ж�m �ܷ�19��������ǡ�ú���k��3��������������������YES���������NO��

���磬���룺

43833 3

�������������YES

�������

39331 3

������3��3�������ܱ�19������Ҳ������������Ӧ���NO

����
m �� k ��ֵ���ո���

���
��������ʱ��� YES��������ʱ��� NO
*/

#include <iostream>
using namespace std;

bool k3(int m, int k);

int main()
{
	int m = 0, k = 0;
	cin >> m >> k;
	
	if (m % 19 == 0 && k3(m, k))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}

bool k3(int m, int k)
{
	int a[6] = { 0 };
	for (int i = 0; m > 0; i++)
	{
		a[i] = m % 10;
		m /= 10;
	}

	int num = 0;
	for (int i = 0; i < 6; i++)
	{
		if (a[i] == 3)
		{
			num++;
		}
	}

	if (num == k)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/*
����⣣1����������ԵԪ��֮��

��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

����һ���������󣬼���λ�ھ����Ե��Ԫ��֮�͡���ν�����Ե��Ԫ�أ����ǵ�һ�к����һ�е�Ԫ���Լ���һ�к����һ�е�Ԫ�ء�

����

��һ��Ϊ����k����ʾ��k�����ݡ�

ÿ�������ж�����ɣ���ʾһ������

��һ�зֱ�Ϊ���������m������n��m < 100��n < 100��������֮���Կո�ָ���

�����������m�������У�ÿ�а���n������������֮���Կո���Ϊ�����

���

�����Ӧ����ı�ԵԪ�غͣ�һ��һ�С�
*/

#include <iostream>
using namespace std;

int sumOfEdge(int m, int n, int a[100][100])
{
	int sum = 0;
	if (m == 1 && n == 1)
	{

		return a[0][0];
	}
	if (m == 1)
	{
		return a[0][0] + a[0][n - 1];
	}
	if (n == 1)
	{
		return a[0][0] + a[m - 1][0];
	}
	for (int i = 0; i < m; i++)
	{
		if (i == 0 || i == m - 1)
		{
			for (int j = 0; j < n; j++)
			{
				sum += a[i][j];
			}
		}
		else
		{
			sum += (a[i][0] + a[i][n - 1]);
		}
	}
	return sum;
}

int main()
{
	int k = 0;
	cin >> k;

	for (int i = 0; i < k; i++)
	{
		int m, n;
		cin >> m >> n;
		int a[100][100];
		for (int j = 0; j < m; j++)
		{
			for (int l = 0; l < n; l++)
			{
				cin >> a[j][l];
			}
		}
		int sum = sumOfEdge(m, n, a);
		cout << sum << endl;
	}
}

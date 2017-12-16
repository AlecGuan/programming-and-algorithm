/*
����⣣5��ϸ��ʵ�����

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

��һ��ϸ����ΪA��B�������֣����ǵ���������������ȫ��ͬ�������ڷ�ֳ���������������A���ַ�ֳ�����ǳ�ǿ��B���ֵķ�ֳ������������һ��Ϊʱһ�� Сʱ��ϸ����ֳʵ���У�ʵ��Ա���������ϸ������������ˣ������дһ�����򣬸���ʵ���������������ֵ����������·ֳ����顣

����

�����ж��У���һ��Ϊ����n��n��100������ʾ��n��������

����n�У�ÿ���������������ֱ�����������ţ�����ǰϸ�������������ϸ��������

���

����ж��У�

��һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�

Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�

��������
1 10 3456
2 10 5644
3 10 4566
4 20 234
5 20 232

�������
3
1
3
2
2
5
4

��ʾ

�����ڲ�ϸ����ֳ�������� ԶԶС�� ����֮��ϸ����ֳ�������졣

Ҳ����˵�����ּ��κ�����ϸ���ķ�ֳ��֮��������ڲ�����ϸ���ķ�ֳ��֮���
*/

#include <iostream>
using namespace std;

void sortByRate(int n, int id[], double rate[]);

int main()
{
	int n = 0;
	cin >> n;

	int id[100];
	double rate[100];
	for (int i = 0; i < n; i++)
	{
		int x1, x2;
		cin >> id[i] >> x1 >> x2;
		rate[i] = (x2 - x1) / x1;
	}

	sortByRate(n, id, rate); // ��������

	double maxDiff = 0;
	int maxDiffIndex = 0;
	for (int i = 0; i < n - 1; i++)
	{
		double diff = rate[i] - rate[i + 1];
		if (maxDiff < diff)
		{
			maxDiff = diff;
			maxDiffIndex = i;
		}
	}

	// ���A����ϸ��
	cout << maxDiffIndex + 1 << endl;
	for (int i = maxDiffIndex; i >= 0; i--)
	{
		cout << id[i] << endl;
	}

	// ���B����ϸ��
	cout << n - maxDiffIndex - 1 << endl;
	for (int i = n - 1; i > maxDiffIndex; i--)
	{
		cout << id[i] << endl;
	}

	return 0;
}

void sortByRate(int n, int id[], double rate[])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (rate[j + 1] > rate[j])
			{
				int tmpId = id[j];
				id[j] = id[j + 1];
				id[j + 1] = tmpId;
				double tmpRate = rate[j];
				rate[j] = rate[j + 1];
				rate[j + 1] = tmpRate;
			}
		}
	}
}

/*
����⣣2���Ĵ��

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

�ҹ���4��ˮ����

A˵����ͥ����󣬺������С��۶����������

B˵���������󣬶�ͥ����С��۶�����ڶ���̫��������

C˵���������С����ͥ��������

D˵��۶�������̫����С��������ڶ�����ͥ��������

��֪��4�����Ĵ�С������ȣ�4����ÿ�˽����һ����

���̰���۶��������ͥ����̫�����������˳��������ǵĴ�С������

����

�ޡ�

���

���Ϊ4�У���1��Ϊ۶�����Ĵ�С���Σ��Ӵ�С���ηֱ��ʾΪ1��2��3��4����2��3��4�зֱ�Ϊ��ͥ����̫����������Ĵ�С���Ρ�

��������
(��)

�������
3
2
1
4
*/

#include <iostream>
using namespace std;

int check(int guess[], int order[]);


int main()
{
	// ˳��۶��������ͥ����̫���������
	int guessA[4] = { 3,1,0,4 };
	int guessB[4] = { 2,4,3,1 };
	int guessC[4] = { 0,3,0,4 };
	int guessD[4] = { 1,3,4,2 };

	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (j == i)
			{
				continue;
			}
			for (int k = 1; k <= 4; k++)
			{
				if (k == i || k == j)
				{
					continue;
				}
				for (int l = 1; l <= 4; l++)
				{
					if (l == i || l == j || l == k)
					{
						continue;
					}
					int order[4] = { i, j, k, l };
					if (check(guessA, order) == 1 && check(guessB, order) == 1 && check(guessC, order) == 1 && check(guessD, order) == 1)
					{
						for (int m = 0; m < 4; m++)
						{
							cout << order[m] << endl;
						}
						return 0;
					}
				}
			}
		}
	}
	return 0;
}

int check(int guess[], int order[])
{
	int result = 0;
	for (int i = 0; i < 4; i++)
	{
		if (order[i] == guess[i])
		{
			result++;
		}
	}
	return result;
}

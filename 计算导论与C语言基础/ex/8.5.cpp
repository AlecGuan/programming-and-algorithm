/*
��������

����

��һ������n,��������λ����������ӵõ�����m������n,���nΪ��������.����21,21%(2+1)==0,����21����������.�������10��n(n < 100)֮���������������.

����

��һ��,����n,(10 <= n < 100)

���

�ж���.����С�����˳��������д��ڵ���10,С�ڵ���n����������,ÿ��һ����������.
*/

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	for (int i = 10; i < n; i++)
	{
		int num = i;
		int sumOfDigits = 0;
		while (num > 0)
		{
			sumOfDigits += num % 10;
			num /= 10;
		}

		if (i % sumOfDigits == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}

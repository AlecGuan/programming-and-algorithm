/*
�������

����

����n����������������ͣ���Լ��֮��������ʽ��ʾ��

���磺

q/p = x1/y1 + x2/y2 +....+ xn/yn��

q/pҪ���ǹ�Լ֮�����ʽ��

�磺5/6�Ѿ��������ʽ��3/6��Ҫ��ԼΪ1/2, 3/1��Ҫ��Լ��3��10/3���������ʽ��

PS:���Ӻͷ�ĸ��û��Ϊ0�������Ҳû�г��ָ��������

����

��һ�е�����n,����һ���м���������Ҫ���

��������n���Ƿ���

���

���ֻ��һ�У�����Լ��Ľ��
*/

#include <iostream>
using namespace std;

int main()
{

	int n = 0;
	cin >> n;

	int sumn = 0, sumd = 1; // ������ sum/sumd
	while (n--)
	{
		int num, deno;
		char slash;
		cin >> num >> slash >> deno;
		// a/b + c/d = (a*d + c*d) / (b*d)
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;
	}

	int a = sumd, b = sumn, c;
	while (a != 0)
	{
		c = a;
		a = b%a;
		b = c;
	}
	int gcd = b; // ���Լ��

	sumd /= gcd;
	sumn /= gcd;

	if (sumd > 1)
	{
		cout << sumn << '/' << sumd << endl;
	}
	else
	{
		cout << sumn << endl;
	}
	return 0;
	return 0;
}

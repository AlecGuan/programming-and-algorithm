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

/*
����⣣3��������ж�
��Դ POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������ 1000ms �ڴ����� 65536kB

����
�������� a �� b �����õ���� c����ʾΪ��a  b = c�����У��������Ǽӷ� +������ -���˷� ������  �� ȡ�� %������������ a,b,c ��ֵ��ȷ������������ĳ������������������Ӧ�������������κ����㶼������������� error.

���磺

���룺

3,4,5

�����

error

�����룺

3,4,3

�������

%

����
a b�� c ��ֵ�����������룬�Զ��ż��

���
��������֮һ�� error
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	char comma;
	cin >> a >> comma >> b >> comma >> c;

	if (a + b == c)
	{
		cout << "+" << endl;
	}
	else if (a - b == c)
	{
		cout << "-" << endl;
	}
	else if (a * b == c)
	{
		cout << "*" << endl;
	}
	else if (a / b == c)
	{
		cout << "/" << endl;
	}
	else if (a % b == c)
	{
		cout << "%" << endl;
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;
}
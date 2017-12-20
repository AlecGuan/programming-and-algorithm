/*
����⣣4������ƥ������
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
��ĳ���ַ��������Ȳ�����100�����������š������źʹ�Сд��ĸ���涨���볣��������ʽ��һ�����κ�һ�������Ŷ����ڵ����������ұ��Ҿ��������������ƥ�䡣дһ�������ҵ��޷�ƥ��������ź������ţ����ԭ���ַ�����������һ�б������ƥ������š�����ƥ�����������"$"��ע,����ƥ�����������"?"��ע.

����
��������������ݣ�ÿ������һ�У�����һ���ַ�����ֻ�����������źʹ�Сд��ĸ���ַ������Ȳ�����100

ע�⣺cin.getline(str,100)���ֻ������99���ַ���

���
��ÿ��������ݣ�!!!������У���һ�а���ԭʼ�����ַ�!!!���ڶ�����"$","?"�Ϳո���ɣ�"$"��"?"��ʾ��֮��Ӧ�������ź������Ų���ƥ�䡣
*/

#include <iostream>
#include <cstring>
using namespace std;

/*
ƥ������
���룺
	char str[]: ƥ����ַ���
	int start: ƥ����ʼλ��
	bool *matched: һά���飬ƥ��ɹ�Ϊtrue������Ϊfalse
����ֵ��
	int n��
		ƥ��ɹ�����������index
		ƥ���������-1
*/
int match(char str[], int start, bool *matched)
{
	if (strlen(str) == start)
	{
		return -1; //ƥ�����
	}
	else
	{
		if (str[start] == '(')
		{
			int n = match(str, start + 1, matched);
			if (str[n] == ')')
			{
				matched[start] = true;
				matched[n] = true;
				return match(str, n + 1, matched);
			}
			else
			{
				return n;
			}
		}
		else if (str[start] == ')')
		{
			return start;
		}
		else
		{
			return match(str, start + 1, matched);
		}
	}
}

int main()
{
	char str[100];
	// ��������
	while (cin.getline(str, 101))
	{
		bool matched[101] = { 0 };

		// ƥ������
		int n = match(str, 0, matched);
		while (n != -1)
		{
			n = match(str, n + 1, matched);
		}

		// ������
		cout << str << endl;
		for (int i = 0; str[i] != '\0'; i++)
		{
			char output = ' ';
			if (!matched[i])
			{
				switch (str[i])
				{
				case '(':
					output = '$';
					break;
				case ')':
					output = '?';
					break;
				}
			}
			cout << output;
		}
		cout << endl;
	}
	return 0;
}
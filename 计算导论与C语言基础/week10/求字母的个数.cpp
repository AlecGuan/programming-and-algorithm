/*
����

��һ���ַ������ҳ�Ԫ����ĸa,e,i,o,u���ֵĴ�����

����

����һ���ַ������ַ����п����пո�����cin.getline(s,counts)������һ���ַ������뵽�ַ�����s�У�����counts��s����󳤶ȣ�������������ֱ��д80�������ַ�������С��80���ַ���

���

���һ�У��������a,e,i,o,u�������ַ����г��ֵĴ���������֮���ÿո�ָ���
*/

#include <iostream>
using namespace std;

int main()
{
	char str[80];
	int count[5] = { 0 };
	cin.getline(str, 80);

	for (int i = 0; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
		case 'a':
			count[0]++;
			break;
		case 'e':
			count[1]++;
			break;
		case 'i':
			count[2]++;
			break;
		case 'o':
			count[3]++;
			break;
		case 'u':
			count[4]++;
			break;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << count[i] << ' ';
	}

	return 0;
}

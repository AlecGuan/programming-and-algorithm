/*
����

һ����'.'��β�ļ�Ӣ�ľ��ӣ�����֮���ÿո�ָ���û����д��ʽ������������ʽ

����

һ����'.'��β�ļ�Ӣ�ľ��ӣ����Ȳ�����500��������֮���ÿո�ָ���û����д��ʽ������������ʽ

���

�þ�������ĵ��ʡ��������һ�����������һ��
*/

#include <iostream>
using namespace std;

int main()
{
	char sentence[500];
	int len = 0, maxLen = 0;
	int ptr = 0, maxPtr = 0;

	cin.getline(sentence, 500);

	int i = 0;
	while (sentence[i] != '.')
	{
		if (sentence[i] == ' ')
		{
			ptr = i + 1;
			len = 0;
		}
		else
		{
			len++;
		}
		if (len > maxLen)
		{
			maxLen = len;
			maxPtr = ptr;
		}
		i++;
	}

	for (int i = maxPtr; i < maxPtr + maxLen; i++)
	{
		cout << sentence[i];
	}

	cout << endl;
	return 0;
}

/*
����⣣2���ַ����д�����2�����ĸ
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
����һ�����Ȳ�����500�����ŵ��ַ���������ڴ��г��ֵ�2���Ӣ����ĸ(��Сд��ĸ��Ϊ��ͬ)�ʹ���������������������ţ�����Բ����ǣ�������ж����ĸ�Ĵ������ǵ�2�࣬�򰴴�����ĸ���ֵ�˳�������1����

�� ab&dcAab&c9defgb

���a �� b������3�Σ�c��d������2�Σ�e��f �� g ������1�Σ����еķ���&��9�����Բ����ǡ���ˣ����ֵ�2���Ӧ���� c �� d������ d ��ʼ���ֵ�λ���� c ��ǰ�棬��ˣ����Ϊ

D+d:2

(�ٶ����ַ����У�������2�����ĸ�ܴ���)

����
һ���ַ���

���
��д��ĸ+Сд��ĸ:����
*/

#include <iostream>
#include <cctype>
using namespace std;

struct Alphabet
{
	char letter;  // ��ĸ�������ִ�Сд
	int fisrtShowIndex;  // ��һ�γ��ֵ�index
	int count;  // ��ĸ���ֵĴ���
	bool show; // ��ĸ�Ƿ����
};

int main()
{
	char str[500];
	cin.getline(str, 500);

	// ��ĸ���ʼ��
	Alphabet alphabet[26];
	for (int i = 0; i < 26; i++)
	{
		//alphabet[i].letter = char(97 + i);
		//alphabet[i].fisrtShowIndex = -1;
		//alphabet[i].count = 0;
		alphabet[i] = { char(97 + i),0,0,false };
	}

	// �����ַ���
	for (int i = 0; str[i] != '\0'; i++)
	{
		str[i] = tolower(str[i]);
		if (isalpha(str[i]))
		{
			int index = str[i] - 'a';
			alphabet[index].count++;
			if (!alphabet[index].show)
			{
				alphabet[index].fisrtShowIndex = i;
				alphabet[index].show = true;
			}
		}
	}

	// �ҳ��ڶ��������ȳ��ֵ���ĸ
	Alphabet max = { 0,0,0 }, second = { 0,501,0 };
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i].count > max.count)
		{
			max = alphabet[i];
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i].show && alphabet[i].count < max.count)
		{
			if (alphabet[i].count > second.count)
			{
				second = alphabet[i];
			}
			else if (alphabet[i].count == second.count && alphabet[i].fisrtShowIndex < second.fisrtShowIndex)
			{
				second = alphabet[i];
			}
		}
	}
	cout << (char)toupper(second.letter) << '+' << second.letter << ':' << second.count << endl;
	return 0;
}

/*
����⣣2�� ��Լ����
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
�������Ǻ��ᣨDNA�������������ļ������˫�����ķ�ʽ��϶��ɡ�������DNA�ļ������4�֣��ֱ�Ϊ����ʣ�A���������ʣ�G����������ण�T���Ͱ���ण�C��������֪��������������������Ķ�Ӧλ���ϣ���������Ǻ����������ԣ����������ǺͰ������ԡ����������Ǹ���һ�������ϵļ�����У�������Ӧ�Ļ������ϵļ�����С�

����
��һ����һ��������n����������n��Ҫ���ļ������

���¹���n�У�ÿ����һ���ַ�����ʾһ�������������ַ���ֻ���д�д��ĸA��T��G��C���ֱ��ʾ����ʡ�������ड������ʺͰ���ड�ÿ��������ĳ��ȶ�������255��

���
����n�У�ÿ��Ϊһ��ֻ���д�д��ĸA��T��G��C���ַ������ֱ�Ϊ������ĸ�����������ļ������
*/

// ָ�����βΣ�����ָ�룬��̬�ֲ�����
#include <iostream>
#include <cstring>
using namespace std;

char *match(char *DNA, int len)
{
	static char matched[256];
	for (int i = 0; i < len; i++)
	{
		switch (DNA[i])
		{
		case 'A':
			*(matched + i) = 'T';
			break;
		case 'T':
			*(matched + i) = 'A';
			break;
		case 'C':
			*(matched + i) = 'G';
			break;
		case 'G':
			*(matched + i) = 'C';
			break;
		}
	}
	*(matched + len) = '\0';
	return matched;
}
int main()
{
	int n = 0;
	cin >> n;
	cin.get(); // �������з�
	for (int i = 0; i < n; i++)
	{
		char DNA[256];
		cin.getline(DNA, 256);
		char *matched = match(DNA, strlen(DNA));
		cout << matched << endl;
	}
	return 0;
}

// ֱ�����Ҳ����
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cin.get(); // �������з�
//	for (int i = 0; i < n; i++)
//	{
//		char DNA[256];
//		cin.getline(DNA, 256);
//		for (int k = 0; DNA[k] != '\0'; k++)
//		{
//			switch (DNA[k])
//			{
//			case 'A':
//				cout << 'T';
//				break;
//			case 'T':
//				cout << 'A';
//				break;
//			case 'C':
//				cout << 'G';
//				break;
//			case 'G':
//				cout << 'C';
//				break;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}

/*
����⣣3����Ʊͳ��

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

��һ��С�͵ı���ϵͳ���������¹��ܣ�

��1��ͳ��ÿ����������Ʊ����Ǯ��

��2��ͳ��ÿ�෢Ʊ����Ǯ��

����ϵͳ��Ϊ���£����跢Ʊ�����A��B��C����;һ���������ˣ�ID�ֱ�Ϊ1��2��3��

����

ϵͳ����������У�ÿ�е�һ����Ϊ��ԱID�����ͣ�1��2��3�����ڶ�����Ϊ��Ʊ������(����������100)��֮���Ƕ����Ʊ����ַ��ͣ�A��B��C������Ӧ��Ʊ�������ȸ�����,������1000.0����

���

����������У�ǰ����Ϊÿ�ˣ���ID��С���������������Ʊ��Ǯ����������λС������������Ϊÿ�෢Ʊ����Ǯ����������λС������

��������
1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
3 3 B 1 C 2 C 1
2 4 B 1 A 1 C 1 A 1

�������
1 6.00
2 4.00
3 4.00
A 5.00
B 3.00
C 6.00
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float bill[3][3] = { 0 };

	for (int i = 0; i < 3; i++)
	{
		int id, n;
		cin >> id >> n;
		for (int j = 0; j < n; j++)
		{
			char type;
			float money;
			cin >> type >> money;
			switch (type)
			{
			case 'A':
				bill[id - 1][0] += money;
				break;
			case 'B':
				bill[id - 1][1] += money;
				break;
			case 'C':
				bill[id - 1][2] += money;
				break;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ' ' << fixed << setprecision(2) << bill[i][0] + bill[i][1] + bill[i][2] << endl;
	}

	char type[] = { 'A', 'B', 'C' };
	for (int i = 0; i < 3; i++)
	{
		cout << type[i] << ' ' << fixed << setprecision(2) << bill[0][i] + bill[1][i] + bill[2][i] << endl;
	}
	return 0;
}

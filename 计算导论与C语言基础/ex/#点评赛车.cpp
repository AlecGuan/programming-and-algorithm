/*
��������

����

4��ר�Ҷ�4��������������

1��A˵��2����������õģ�

2��B˵��4����������õģ�

3��C˵��3������������õģ�

4��D˵�� B˵���ˡ�

��ʵ��ֻ��1��������ѣ���ֻ��1��ר��˵���ˣ�����3�˶�˵���ˡ�

���������ѳ��ĳ��ţ��Լ�˵�Ե�ר�ҡ�

����

�����롣

���

������С���һ�������ѳ��ĳ��ţ�1-4�е�ĳ�����֣����ڶ������˵�Ե�ר�ң�A-D�е�ĳ����ĸ����
*/
#include <iostream>
using namespace std;

int main()
{
	for (int best = 1; best <= 4; best++)
	{
		bool a = (best == 2);
		bool b = (best == 4);
		bool c = (best != 3);
		bool d = !b;
		// ֻ��һ��ר��˵��
		if (a + b + c + d == 1)
		{
			cout << best << endl;
			if (a)
			{
				cout << "A" << endl;
			}
			else if (b)
			{
				cout << "B" << endl;
			}
			else if (c)
			{
				cout << "C" << endl;
			}
			else if (d)
			{
				cout << "D" << endl;
			}
		}
	}
	return 0;
}

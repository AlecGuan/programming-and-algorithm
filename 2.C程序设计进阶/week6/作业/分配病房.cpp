/*
����⣣1�����䲡��
��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����
ĳ�����ҵĲ�����Ϊ��֢����ͨ��ֻ�е����˵ļ������س̶ȳ�������ס��֢�������������ֵ���ſ��԰�����ס��֢������

����Ҫ�����һ�����򣬸����˰��źò��������������س̶���0��10����ʾ��0��ʾСë����10��ʾ�ǳ����ء�

����
��һ�����벡�˵ĸ���m(m < 50)���Լ�����ס����֢�������������ֵa

������m�У�ÿ�б�ʾ���˱�ţ�����λ����0���룩���伲�������س̶ȣ���������1λС������

ÿ�����˵ļ������س̶ȶ���һ����

���
Ҫ���ղ��˵����س̶����ס����֢������Ĳ��˵ı��

ע�⣺

�����ǰ���в��˵����س̶Ȳ�������ס����֢������������None.�������������ţ�
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int m = 0;
	float a = 0;
	cin >> m >> a;

	int id[50];
	float acuity[50];
	int num = 0; //��֢���˸���
	for (int i = 0; i < m; i++)
	{
		int tmpId;
		float tmpAcuity;
		cin >> tmpId >> tmpAcuity;
		if (tmpAcuity > a)
		{
			id[num] = tmpId;
			acuity[num] = tmpAcuity;
			num++;
		}
	}
	if (num == 0)
	{
		cout << "None." << endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < num; i++)
		{
			for (int j = 1; j < num; j++)
			{
				if (acuity[j] > acuity[j - 1])
				{
					float tmp1 = acuity[j];
					acuity[j] = acuity[j - 1];
					acuity[j - 1] = tmp1;
					int tmp2 = id[j];
					id[j] = id[j - 1];
					id[j - 1] = tmp2;
				}
			}
		}
	}

	for (int i = 0; i < num; i++)
	{
		cout << setw(3) << setfill('0') << id[i] << ' ';
		cout << fixed << setprecision(1) << acuity[i] << endl;
	}
	return 0;
}

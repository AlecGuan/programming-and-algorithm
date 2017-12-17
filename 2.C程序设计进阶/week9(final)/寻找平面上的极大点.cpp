/*
����⣣4��Ѱ��ƽ���ϵļ����
��Դ POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������ 1000ms �ڴ����� 65536kB

����
��һ��ƽ���ϣ������������(x,y),(a,b),���˵(x,y)֧����(a,b)������ָx=a,y=b;

��ͼ����������(a,b)��������(x,y)Ϊ���Ͻǵ�һ�����޵������ڡ�

����n����ļ��ϣ�һ���������ɸ��㣬���ǲ��ᱻ�����е��κ�һ����֧�䣬��Щ���������ֵ�㡣

����ҳ����еļ���㣬����x������С����������������ꡣ

����涨��n������100�����Ҳ����ǵ������Ϊ�����������

����
����������У���һ����������n����ʾ�ǵ������ڶ��а���n��������꣬����ֵ�������������귶Χ��0��100�����������в�����������ͬ�ĵ㡣

���
��x��������С�����˳��������м���㡣

�����ʽΪ(x1,y1),(x2,y2),...(xk,yk)

ע�⣺�����ÿ����֮����,�ָ�,���һ����֮��û��,,������Ͷ�������ᱻ�д�
*/

#include <iostream>
#include <ctype.h>
using namespace std;

struct Point
{
	int x;
	int y;
};

int main()
{
	// ��ĸ���
	int n = 0;
	cin >> n;

	Point point[100];
	for (int i = 0; i < n; i++)
	{
		cin >> point[i].x >> point[i].y;
	}

	// �ҳ����еļ���ֵ�㣬��������maxPoint[100]��
	Point maxPoint[100];
	int num = 0; // ����ֵ��ĸ���
	for (int i = 0; i < n; i++)
	{
		bool isMaxPoint = true;
		for (int j = 0; j < n; j++)
		{
			if (j == i)
			{
				continue;
			}
			if (point[i].x <= point[j].x && point[i].y <= point[j].y)
			{
				isMaxPoint = false;
				break;
			}
		}
		if (isMaxPoint)
		{
			maxPoint[num++] = point[i];
		}
	}

	// ���ݺ���������ð������
	for (int i = 0; i < num; i++)
	{
		for (int j = 1; j < num; j++)
		{
			if (maxPoint[j - 1].x > maxPoint[j].x)
			{
				Point temp = maxPoint[j - 1];
				maxPoint[j - 1] = maxPoint[j];
				maxPoint[j] = temp;
			}
		}
	}

	// ��������
	for (int i = 0; i < num - 1; i++)
	{
		cout << "(" << maxPoint[i].x << "," << maxPoint[i].y << "),";
	}
	// ���ڸ�ʽҪ�����һ���������
	cout << "(" << maxPoint[num - 1].x << "," << maxPoint[num - 1].y << ")" << endl;
	return 0;
}
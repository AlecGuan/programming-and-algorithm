/*
����⣣3�������Ű�

��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

��һ��Ӣ�Ķ��ģ�����֮���Կո�ָ���ÿ�����ʰ�����ǰ����ڵı����ţ����뽫���������Ű棬Ҫ�����£�

ÿ�в�����80���ַ���ÿ�����ʾ���ͬһ���ϣ���ͬһ�еĵ���֮����һ���ո�ָ������׺���β��û�пո�

����

��һ����һ������n����ʾӢ�Ķ����е��ʵ���Ŀ. �����n���Կո�ָ���Ӣ�ĵ��ʣ����ʰ�����ǰ����ڵı����ţ���ÿ�����ʳ��ȶ�������40����ĸ����

���

�Ű��Ķ����ı���ÿ���ı��ַ������80���ַ�������֮����һ���ո�ָ���ÿ���ı���β��û�пո�
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int num = 0, lineLength = 0;
	cin >> num;
	char word[40];
	for (int i = 0; i < num; i++)
	{
		cin >> word;
		if (lineLength + strlen(word) + 1> 80)
		{
			cout << endl;
			lineLength = 0;
		}
		else if (lineLength > 0)
		{
			cout << " ";
			lineLength++;
		}
		cout << word;
		lineLength += strlen(word);
	}

	return 0;
}

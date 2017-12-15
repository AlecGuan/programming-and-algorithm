/*
����⣣1�����ʷ�ת

��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

����һ�����ӣ�һ�У����������е�ÿһ�����ʷ�ת�������

����

ֻ��һ�У�Ϊһ���ַ�����������500���ַ�������֮���Կո��������ν����ָ�������в������ո���������ַ���

���������cin.getline����һ�к���������ʵݹ鴦��

���

��תÿһ�����ʺ���ַ���������֮��Ŀո�����ԭ��һ�¡�

��������
1
hello    world.

�������
1
olleh    .dlrow

*/

#include <iostream>
using namespace std;

void revertWord(char str[], int start, int end);
void revert(char str[], int start);

int main()
{
	char str[500];
	cin.getline(str, 500);
	revert(str, 0);
	cout << str << endl;
	return 0;

}

void revertWord(char str[], int start, int end)
{
	for (int i = start, j = end; i < j; i++, j--)
	{
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void revert(char str[], int start)
{
	while (str[start] == ' ')
	{
		start++;
	}
	if (str[start] == '\0')
	{
		return;
	}
	int end = start;
	while (str[end] != ' ' && str[end] != '\0')
	{
		end++;
	}
	revertWord(str, start, end - 1);
	revert(str, end);
}

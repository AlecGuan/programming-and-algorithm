/*
����⣣4��Tomorrow never knows��

��Դ: POJ (Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)

ע�⣺ ��ʱ������: 1000ms �ڴ�����: 65536kB

����

�׿ǳ�ġ�A day in the life���͡�Tomorrow never knows�������˿ڣ����������a day in the life,��Ļ���tomorrow never knows?����ѧ�˼Ƹ�֮��������������⣬���ھ���ʵ�ְɡ�

����һ����ʽΪyyyy-mm-dd�����ڣ����꣭�£��գ���������������һ������ڡ����Լٶ���������ڲ�����1600-01-01��Ҳ������2999-12-30��

����

�����һ�У���ʽΪyyyy-mm-dd�����ڡ�

���

���Ҳ��һ�У���ʽΪyyyy-mm-dd������

��������
2010-07-05

�������
1
2010-07-06
*/

#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year);
bool isEndOfMonth(int month, int day, bool isLeapYear);
bool isEndOfYear(int month, int day);

int main()
{
	int year, month, day;
	char dash;
	cin >> year >> dash >> month >> dash >> day;
	if (isEndOfMonth(month, day, isLeapYear(year)))
	{
		if (isEndOfYear(month, day))
		{
			year++;
			month = 1;
			day = 1;
		}
		else
		{
			month++;
			day = 1;
		}
	}
	else
	{
		day++;
	}
	cout << year << '-'
		<< setfill('0') << setw(2) << month << '-'
		<< setfill('0') << setw(2) << day << endl;
	return 0;
}

bool isLeapYear(int year)
{
	return year % 400 == 0 || (year % 100 != 0 && year % 4 == 0);
}

bool isEndOfMonth(int month, int day, bool isLeapYear)
{
	int months[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isLeapYear)
	{
		months[1] = 29;
	}

	for (int i = 0; i < 12; i++)
	{
		if (day == months[month - 1])
		{
			return true;
		}
	}
	return false;
}

bool isEndOfYear(int month, int day)
{
	return month == 12 && day == 31;
}

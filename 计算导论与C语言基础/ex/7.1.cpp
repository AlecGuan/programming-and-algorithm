/*
����

ĳҽԺ��ͳ��һ��ĳ����Ļ������������Ƿ��йأ���Ҫ����ǰ����ϼ�¼��������

����

��2�У���һ��Ϊ�������˵���Ŀn��0 < n <= 100)���ڶ���Ϊÿ�����˻���ʱ�����䡣

���

ÿ������Σ����ĶΣ�18���£�19-35��36-60������60ע�⿴��������ĸ�ʽ���Ļ�������ռ�ܻ��������ı������԰ٷֱȵ���ʽ�������ȷ��С�������λ��double��������c++�ĸ�ʽ���������������ο���http://www.cplusplus.com/reference/iomanip��Ҳ��������������һ�£����Ϻܶ�ġ�
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float total = 0;
	int n[4] = { 0 };
	cin >> total;

	for (int i = 0; i < total; i++)
	{
		int age = 0;
		cin >> age;
		age <= 18 ? n[0]++ :
			age <= 35 ? n[1]++ :
				age <= 60 ? n[2]++ : n[3]++;
	}

	cout << "1-18: " << fixed << setprecision(2) << n[0] / total * 100 << "%" << endl;
	cout << "19-35: " << fixed << setprecision(2) << n[1] / total * 100 << "%" << endl;
	cout << "36-60: " << fixed << setprecision(2) << n[2] / total * 100 << "%" << endl;
	cout << "60-: " << fixed << setprecision(2) << n[3] / total * 100 << "%" << endl;
	return 0;
}

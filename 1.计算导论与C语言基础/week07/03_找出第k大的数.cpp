#include <iostream>
using namespace std;

int main()
{
	int n = 0, k = 0;
	cin >> n >> k;
	// û�и�n�ķ�Χ�����Զ�̬��������
	int *a = new int[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		// �ҵ���a[i]��ĸ�������Ϊk-1��a[i]�ǵ�k�����
		int bigger = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] > a[i])
			{
				bigger++;
			}
		}
		if (bigger == k - 1)
		{
			cout << a[i] << endl;
			break;
		}
	}
	delete[] a;
	return 0;
}

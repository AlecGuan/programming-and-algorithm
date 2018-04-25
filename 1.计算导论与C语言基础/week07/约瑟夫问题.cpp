#include <iostream>
using namespace std;

int main()
{

	int n = 0, m = 0;

	while (cin >> n >> m)
	{
		if (n == 0 && m == 0)
		{
			break;
		}

		int id[300]; // id ��¼���ӵı��
		int state[300];  // state ��¼����״̬��1��ʾȦ�ڣ�0��ʾȦ��

		for (int i = 0; i < n; i++)
		{
			id[i] = i + 1;
			state[i] = 1;
		}

		int count = 1; // ��1��ʼ����
		for (int i = 0, num = n; num != 1; i++) // num��Ȧ�ں���
		{
			// i >= n ��ʾ����һȦ
			if (i >= n)
			{
				i -= n;
			}

			if (state[i] != 0)
			{
				if (count % m == 0)
				{
					state[i] = 0;
					num--;
				}
				count = (count + 1) % m;
			}
		}

		for (int i = 0; i < n; i++)
		{
			if (state[i] == 1)
			{
				cout << id[i] << endl;
			}
		}
	}
	return 0;
}
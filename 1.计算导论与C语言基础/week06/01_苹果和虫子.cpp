#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	double x = 0, y = 0;
	cin >> n >> x >> y;
	int ans = n - y / x;    // ע������n��ǿ������ת��Ϊdouble��
	ans = ans < 0 ? 0 : ans;  // ʣ��ƻ��������СΪ0
	cout << ans << endl;
	return 0;
}

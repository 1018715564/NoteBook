#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int ans = 3*n;//ͣ��ʱ�� 
		int pre = 1, next;//֮ǰͣ����¥�㣬������Ҫȥ��¥�� 
		while (n--) {
			cin >> next;
			if (pre > next)
				ans += 4*(pre-next);//�½� 
			else if (pre < next)
				ans += 6*(next-pre);//���� 
			//else �ϴ�Ҫͣ����¥���������ͬ
			pre = next; 
		}
		cout << ans << endl; 
	}
	return 0;
}

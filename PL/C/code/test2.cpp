#include<iostream>
using namespace std;
int days[] = {0, 30, 31, 30, 31, 31, 30, 31, 30, 31};//4��֮��ÿ�µ���������һ��Ԫ��Ϊ0���ڼ��� 
string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int cal_days(int y, int d)
{
	//�����������4��12��������� 
	int num = 0;
	for (int i = 0; i <= y-4; i++)
		num += days[i];
	num += d;
	num -= 12;
	return num;
}
int main()
{
	int ans = 4;
	int y, d;
	cin >> y >> d;
	ans += cal_days(y, d);
	ans %= 7;//�������� 
	cout << week[ans] << endl;
	return 0;
}

//#include<bits/stdc++.h>
//using namespace std;

#include<iostream>
using namespace std;
int reverse(int num)
{
	int result = 0;//��ת��� 
	while (num > 0) {
		result = result * 10 + num % 10;
		num /= 10;
	}
	return result;
}
int main()
{
	int a, b;
	while (cin >> a >> b) {//EOF��������
		int c = reverse(a);
		int d = reverse(b);
		cout << c + d << endl;
	}
	return 0;
}

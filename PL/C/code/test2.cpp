//#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> q;//����һ�����ȶ���
	q.push(1);//��� 
	q.push(2);
	q.push(3);
	while(!q.empty()){//�ж����в�Ϊ�� 
		cout << q.top() << endl; //����Ԫ�� 
		q.pop();//���� 
	} 
    return 0;
}



/*****************************
 File name:recursion
 Author:wugenqiang	Version:1.0		Date:2020/2/26
 Description:��һ������n�ݹ���n! 
 *****************************/
 
#include "stdio.h"
 
 /*****************************
 *�������� recursion_fun
 *���ã���n! 
 *������n - ����׳˵�ֵ
 *����ֵ��n!�Ľ�� 
 *****************************/
int recursion_fun(int n){
    if(n == 0) return 0;
	if(n == 1) return 1;//�ݹ��������
	else	return n * recursion_fun( n-1 );  //�Լ������Լ�
}
 
//������ 
 
int main(){
	int n,res;
	
	printf("������ݹ����֣�");
	scanf("%d",&n);
	
	res = recursion_fun(n);			//n! 
	
	printf("\n %d! = %d",n,res);
	return 0;
}


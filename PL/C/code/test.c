/*Time Limit: 1000 ms
Memory Limit: 256 mb
��ͳ��ĳ��������Χ[L, R]�����������У����� 2 ���ֵĴ�����
���������Χ[2, 22]������ 2 ���� 2 �г����� 1 �Σ����� 12 �г��� 1 �Σ����� 20 �г��� 1�Σ�
���� 21 �г��� 1�Σ����� 22 �г��� 2 �Σ��������� 2 �ڸ÷�Χ��һ�������� 6�Ρ�*/

#include <stdio.h>

int main(){
	int i,j,temp,count=0;
	int l,r;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++){
		temp = i;
		while(temp>0){
			//��ȡ��λ
			if(temp%10==2){
				count++;
			}
			temp /= 10; 
		}

	}
	printf("%d\n",count);
	return 0;
}

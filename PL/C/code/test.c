

#include <stdio.h>
int func(int a[],int n);//�������� 
int main(){
	int t,n,i;
	scanf("%d",&t);//��t����������
	while(t--){
		int result = 0;//��ʱ
		scanf("%d",&n);//��¼ÿ�����ݵĸ���
		int a[n];//�������飬���ÿ������
		i = n;
		while(i--){
			scanf("%d",&a[n-1-i]);//��¼��������¥�� 
		} 
		result = func(a,n);//�����ʱ	
		printf("%d\n",result);//���result 
	}
	
	return 0;
}

int func(int a[],int n){
	int sum = 0,i;
	int last = 1;//�����ʼ¥��
	int now;//������������¥��
	for(i=0;i<n;i++){
		now = a[i];//��������¥�� 
		if(now>last){
			sum += 3 + (now - last) * 6;//�������� 
		}else{
			sum += 3 + (last - now) * 4;//�������� 
		}
		last = now;//�����޸���һ��¥�� 
	}
	
	return sum;
}

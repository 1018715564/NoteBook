#include <stdio.h>
int reverse(int x);//�������� 
int main(){
	int a,b;
	while((scanf("%d %d",&a,&b))!=EOF){
		int s = reverse(a) + reverse(b); 
		printf("%d\n",s);
	} 
	
	return 0;
}

int reverse(int x){//ʵ�ַ�ת���� 
	int result = 0;
	while(x){
		result = result * 10 + x % 10; //x%10��ʾȡ��λ 
		x /= 10;//��ʾ��ȥ��λ 
	}
	return result;
} 

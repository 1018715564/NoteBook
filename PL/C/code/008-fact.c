#include <stdio.h>
//��׳�n�� 
//��Ŀ��дһ���������û�����n,Ȼ��������n! 
int main()
{
	int n;
	int i=1;
	int fact = 1;//�׳� 
	
	printf("������һ��������n��"); 
	scanf("%d",&n); 
	
/*	while(i<=n)
	{
		fact *= i; 
		i++;
	}*/
	for(i=1;i<=n;i++)
	{
		fact *= i; 
	}
	
	printf("%d!= %d\n",n,fact);
    
    return 0;
}

#include <stdio.h>
//��λ�� 
int main()
{
	int x;
	int count = 0;
	
	printf("������һ����������"); 
	scanf("%d",&x); 
	
	do
	{
		x /= 10;
		count++;
	}while(x>0);
	
	printf("������ %d λ��\n",count);
    
    return 0;
}

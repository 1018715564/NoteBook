#include <stdio.h>

//������ 
int main(){
	
	int x;
	int i;
	
	scanf("%d",&x);
	
	for(i=2;i<x;i++){
		if(x%i == 0){
			break;
		}
	}
	
	if(i<x){
		printf("%d ��������",x);
	}else{
		printf("%d ������",x);
	}
	
	return 0;
}


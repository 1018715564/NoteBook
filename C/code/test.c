#include <stdio.h>
#include <string.h> 

int main(){
	char str[3][20];	//�����ά�ַ����� 
	char string[20];	//����һά�ַ����飬��Ϊ�����ַ���ʱ�����ʱ�ַ�����	 
	int i;
	for(i=0;i<3;i++){
		gets(str[i]);
	}
	if(strcmp(str[0],str[1])>0){
		strcpy(string,str[0]);
	}else{
		strcpy(string,str[1]);
	}
	if(strcmp(str[2],string)>0){
		strcpy(string,str[2]);
	}
	printf("%s\n",string);
	
	return 0;
}

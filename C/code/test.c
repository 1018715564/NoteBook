#include <stdio.h> 
struct date{
		int month;
		int day;
		int year;
	};

int main(){
	
	struct date today;
	today.month = 03;
	today.day = 05;
	today.year = 2020;
	printf("%i-%i-%i",today.year,today.month,today.day);
	//%i��ʾ�з���ʮ�������� 
	return 0;
}

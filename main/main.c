#include<stdio.h>
#include"../header/header.h"

void main(){
	int num;
	char restart;
	do{
		printf("1.Calendar\t2.Day\n");
		printf("Input : ");
		scanf("%d",&num);
		if(num==1){
			printf("Input Year : ");
			scanf("%d",&year);
			printf("Input Month : ");
			scanf("%d",&mon);

			calendar(year,mon);
			calendar_p();
		}
		else if(num==2){
			printf("Input Year : ");
			scanf("%d",&year);
			printf("Input Month : ");
			scanf("%d",&mon);
			printf("Input Day : ");
			scanf("%d",&day);
			calendar(year,mon);
			printf("\n   %d is %s ");
		}
		fflush(stdin);
		printf("Want replay ? (Y/N) : ");
		scanf("%c",&restart);
	}while(restart=='Y' || restart=='y');
}

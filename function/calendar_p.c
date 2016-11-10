#include"../header/header.h"
void calendar_p(){
	int count=1;
	int i,j;
	printf("\n\n  %d Y  %d D\n",year,mon);
	printf("  SUN  MON  TUE  WED  THU  FRI  SAT");
	for(i=0;i<6;i++){
		for(j=0;j<7;j++){
			if(i==0 && j<remain){
				printf("    ");
				continue;
			}
			else if(count >= month[mon-1]+1){
				break;
			}
			printf("%4d",count);
			count++;
		}
		printf("\n");
	}
}

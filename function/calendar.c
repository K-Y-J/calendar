#include"../header/header.h"
void calendar(int year,int mon){
	int allday;
	int i;
	allday=((year -1) + (year-1)/4-(year-1)/100+(year-1)/400);

	for(i=0;i<mon;i++){
	if(i==1&&((year%4==0&&year%100!=0||year%400==0))){
		month[1]+=1;
		}
		allday+=month[i];
	}
	allday-=month[i-1];
	remain=(allday+1)%7;
	i=(remain+day-1)%7;
}

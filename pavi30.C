#include<stdio.h>
int main()
{
	int hr1,hr2,hr,min1,min2,min;
	
	printf("enter the first range:");
	
	scanf("%d:%d",&hr1,&min1);
	
	printf("enter the second range:");
	
	scanf("%d:%d",&hr2,&min2);
	
	
	hr=hr1-hr2;
	
	min=min1-min2;
	
	printf("the result is:  %d:%d",hr,min);
	
	
	return 0;
}

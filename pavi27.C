#include<stdio.h>
int main()
{
	int n;
	printf("enter the value");
  
	scanf("%d",&n);
  
	if(n>=0 && n<=100)
  
	{
   printf("%d is numeric",n);
   
	}
	else
	{
	 printf("%d is not numeric",n);
   
	}
	return 0;
  
}

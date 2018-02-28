#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

void main() {
	int a,b;
  
	clrscr();
	printf("enter the swapp numbers");
  
	scanf("%d%d",&a,&b);
	swap(&a,&b);
  
	printf("the swapp values a="%d\n"b="%d\n",a,b);
  
	getch();
}

#include <stdio.h>
int main()
{
int i,n,a=0,b=1,c;

printf("Enter the number of terms: ");

scanf("%d",&n);

printf("Fibonacci Series: ");

for(i=0;i<n;++i)
{
printf("%d \n",b);

c=a+b;
a=b;

b=c;
}
return 0;
}

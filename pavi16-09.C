#include <stdio.h>
int main(void) {
int a,c,n;
printf("\n Enter the number");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
if(a%n==0)
{	
c++;

}
}
if(c==2)

{
printf("\n Given number is a prime number");

}
else
{
printf("\n Given number is not a prime number");

}
return 0;
}

#include<stdio.h>
int main()
{
int start,end,n,f,m,l,c;

printf("\n Enter the range:");
scanf("\n %d \n %d",&start,&end);
for(n=start;n<=end;n++)
{
l=n%10;
m=(n/10)%10;

f=n/100;
c=(f*f*f)+(m*m*m)+(l*l*l);

if(n==c)

printf("\n Armstrong number: %d",n);

}
return 0;
}

#include<stdio.h>
    int main()
{
    char    a[100];
    int b=0,i;
    scanf("%[^\n]s",a);
        
 for(i=0;a[i]!=NULL;i++)
     
    {
 
        if(a[i]>='0' && a[i]<='9')
            
        {
        	b++;
        }
       
    }
      printf("%d",b);
        
    
 
    return 0;
}

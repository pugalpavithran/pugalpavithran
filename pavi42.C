#include<stdio.h>
#include<string.h>
int main() {
   char s1[30], s2[30];
   int n,n1;
   scanf("%s",s1);
  
   scanf("%s",s2);
  
   n=strlen(s1);
   n1=strlen(s2);
  
   if (n > n1)
      printf("%s",s1);
  
   else if (n < n1)
           printf("%s",s2);
  
   else
      printf("both are equal");
 
   return (0);
}

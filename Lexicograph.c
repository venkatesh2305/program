#include <stdio.h>
#include<string.h>
int main() 
{	
   char s[10];
   int n,i,j,temp;
   scanf("%s",&s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
          if(s[i]>s[j])
          {
              temp=s[i];
              s[i]=s[j];
              s[j]=temp;
          }
      }
   }
   printf("%s",s);
	return 0;
}

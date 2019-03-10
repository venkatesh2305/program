#include<stdio.h>
#include<string.h>
int main()
{
char a[20];
int i,len;
scanf("%s",a);
len=strlen(a);
i=len/2;
if(len%2==0)
{
a[i]='*';
a[i-1]='*';
printf("%s",a);
}
else
{
a[i]='*';
printf("%s",a);
}
return 0;
}

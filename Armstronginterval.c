#include<stdio.h>
#include<conio.h>
int main
{
int a,b,temp,sum=0,r,a,i;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
{
temp=i;
while(i!=0)
{
  a=i%10;
  r=a*a*a;
  sum=sum+r;
  i=i/10;
}
if(sum==temp)
{
   printf("%d",temp);
}
}
return 0;
}

#include<stdio.h>
int main()
{
int a,b;
int c;
scanf("%d %d",&a,&b);
  if(b>a)
  {
    c=b-a;
  }else
  {
c=a-b;
  }
if(c%2==0)
printf("even");
else
printf("odd");
return 0;
}

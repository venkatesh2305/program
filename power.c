#include <stdio.h>

int main()
{
  int a,b,temp=1,i;
  scanf("%d",&a);
  scanf("%d",&b);
  for(i=0;i<b;i++)
  {
    temp=temp*a;
  }
  printf("%d",temp);
  return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
int n;
scanf("%d",&n);
if(n>=1&&n<=10)
while(n%2==0)
{
	n=n/2;
  printf("%d",n);
}
	return 0;
}

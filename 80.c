#include<stdio.h>
int main()
{
int n,a;
scanf("%d",&n);
while(n!=0)
{
	a=n%10;
	if(a%2==1)
	printf("%d ",a);
	n/=10;
}
return 0;
}

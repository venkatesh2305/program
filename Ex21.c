#include <stdio.h>
#include<conio.h>
void main() 
{
	int i,n,a,d,sum=0;
	scanf("%d%d%d",&n,&a,&d);
	for(i=0;i<n;i++)
		{
			sum=sum+a;
			a=a+d;
		}
	printf("%d",sum);
	getch();
}

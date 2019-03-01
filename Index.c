#include<stdio.h>
int main(void)
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d %d",i,a[i]);
	}
return 0;
}

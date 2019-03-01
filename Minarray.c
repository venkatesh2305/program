#include<stdio.h>
int main()
{
	int a[100],n,min,i;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		
	}
	printf(" min=%d",min);
}

#include <stdio.h>

int main()
{
	int n,a[n],i,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	}
	printf("large:%d\n",a[i]);
	printf("small:%d",a[0]);
	return 0;
}

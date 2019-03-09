#include <stdio.h>
int main()
{
	int n,i=2;
	scanf("%d",&n);
	while(i<=n)
	{
		if(i==n)
		{
			printf("yes");
		}
		i=i*2;
	}
	return 0;
}

#include <stdio.h>
int main()
{
    int n,k,sum=1,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        sum=sum*n;
    }
    printf("%d",sum);
	return 0;
}

#include<stdio.h>
int main()
{
    int n,i,b,a[10];
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
        printf("%d\t%d\t%d\t",a[2],a[1],a[0]);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,r=1,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=n%10;
        r=r*sum;
        n=n/10;
    }
    printf("%d",r);
}

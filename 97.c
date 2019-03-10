#include<stdio.h>
int main()
{
    int n,sum,r=0;
    scanf("%d",&n);
    while(n!=0)
    {
        sum=n%10;
        r=r*10+sum;
        n/=10;
    } 
        printf("%d",r);
        return 0;
}

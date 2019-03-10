#include<stdio.h>
int main()
{
    int n,a,b,sum;
    scanf("%d",&n);
    a=n%10; 
    b=10-a;
    sum=n+b;
    printf("%d",sum);
    return 0;
}

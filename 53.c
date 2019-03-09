#include<stdio.h>
int main()
{
    int n,i,a[10],sum=0,count=0;
    scanf("%d",&n); 
    while(n!=0)
    {
        a[i]=n%10; 
        sum=sum+a[i];
        n=n/10;
    }
        printf("%d",sum);
        return 0;
}

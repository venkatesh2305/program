#include <stdio.h>
int main()
{
    int n, r =0,s,temp;

    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while( n!=0 )
    {
        s = n%10;
        r = r*10 + s;
        n /= 10;
    }
    if (temp==r)
        printf("yes");
    else
        printf("no");
    
    return 0;
}

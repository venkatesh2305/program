#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    char a[100]; 
    scanf("%s",&a);
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
    printf("%c",a[i]);
    }
    return 0;
}

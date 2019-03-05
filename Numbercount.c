#include<stdio.h> 
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    int m,i,count=0;
    m=strlen(a);
    for(i=0;i<m;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        count++;
    }
    printf("%d",count);
    getch();
}

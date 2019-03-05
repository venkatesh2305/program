#include<stdio.h> 
#include<string.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    int m,i,count=1;
    m=strlen(a);
    for(i=0;i<m;i++)
    {
        if(a[i]=='.')
        count++;
    }
    printf("%d",count); 
    getch();
}

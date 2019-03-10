#include<stdio.h> 
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    scanf("%[^\t\n]s",&a);
    int m,i;
    m=strlen(a);
    for(i=0;i<m;i++)
     {
        if(a[i]>='0' && a[i]<='9')
        printf("%c",a[i]);
     }
    getch();
}

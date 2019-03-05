#include<stdio.h> 
#include<conio.h>
#include<string.h>
void main()
{
    char a[100];
    scanf("%[^\t\n]s",&a);
    int m,i,count=0,digit=0,alphs=0,space=0;
    m=strlen(a);
    for(i=0;i<m;i++)
     {
        if(a[i]>='0' && a[i]<='9')
        digit++; 
        else if(a[i]>='a' && a[i]<='z' || a[i]>='A' &&a[i]<='Z')
        alphs++;
        else
        count++;
    }
    printf("%d",count);
    getch();
}

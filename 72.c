#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int count=0,i;
    scanf("%c",&a);
     for(i=0;i<strlen(a);i++)
     {
         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
     
    {
        count++;
    }
    if(count>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
return 0;
}

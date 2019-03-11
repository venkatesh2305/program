#include <stdio.h>
#include<string.h>
int main()
{ 
    char a[100];
	int n,m,i,count=0;
	scanf("%s",a);
	scanf("%d",&m);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",a[i]);
	    count++;
	    if(m==count)
	    {
	        break;
	    }

	}
	return 0;
}

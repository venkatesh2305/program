#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int i,j,n,f=0;
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
for(j=n-1;j>=0;j++)
{
	if(s[i]==s[j])
	{
	f=1;
	}
	else
	f=0;
}
}
if(f==1)
{
	printf("yes");
}
else
{
	printf("no");
}
getch();
}

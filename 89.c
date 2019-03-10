#include <stdio.h>
int main()
 {
	char a[10];
	int n,i;
	scanf("%s",a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}

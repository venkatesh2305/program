#include <stdio.h>
int main()
{
	int a,b,c,result=0;
	scanf("%d %d %d",&a,&b,&c);
	result=(a*b)%c;
	printf("%d",result);
	return 0;
}

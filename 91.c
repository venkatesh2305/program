#include <stdio.h>
int main()
{
	int l,b,h,tsa,volume;
	scanf("%d %d %d",&l,&b,&h);
	volume=l*b*h;
	tsa=2*((l*b)+(b*h)+(h*l));
	printf("%d\n",volume);
	printf("TSA=%d",tsa);
	return 0;
}

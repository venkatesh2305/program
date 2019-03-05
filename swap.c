#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,temp=0;
scanf("%d%d",&x,&y);
temp=x;
x=y;
y=temp;
printf("%d%d",x,y); 
getch(); 
}

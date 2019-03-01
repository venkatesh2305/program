#include<stdio.h> 
#include<conio.h>
void main()
{
    int n,hr,min;
    scanf("%d",&n);
    hr=n/60;
    min=n%60;
    printf("%d\t%d",hr,min); 
    getch(); 
}   

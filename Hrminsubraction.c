#include<stdio.h> 
#include<conio.h>
void main()
{
    int hr1,min1,hr2,min2,a,b,result,hr,min; 
    scanf("%d%d%d%d",&hr1,&min1,&hr2,&min2);
    hr1=hr1*60;
    a=hr1+min1;
    hr2=hr2*60;
    b=hr2+min2; 
    result=a-b;
    hr=result/60;
    min=result%60;
    printf("%d\t%d",hr,min); 
    getch(); 
}   

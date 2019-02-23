#include<stdio.h>
#include<conio.h>
void main()
    {
        char a;
        scanf("%c",&a);
        if( (a>='a' && a <='z') || (a>='A' && a<='Z'))
        {
        printf("alphabet");
        }
        else
        {
        printf("no");
        }
        getch(); 
    }

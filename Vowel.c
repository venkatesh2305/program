#include<stdio.h>
#include<conio.h>
void main()
    {
        char a;
        scanf("%c",&a);
        if (a == 'a' || a  == 'A' || a  == 'e' || a  == 'E' || a  == 'i' || a  == 'I' || a  =='o' || a =='O' || a  == 'u' || a  == 'U')
        {
            printf("It is a vowel");
        }
        else
        {
            printf("It is a consanant");
        }
        getch();
    }

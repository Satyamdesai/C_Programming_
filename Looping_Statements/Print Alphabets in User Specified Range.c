#include<stdio.h>
#include<conio.h>



int main()
{
    char sp = '\0', Ep ='\0';


    printf("\n Enter start Point = ");
    scanf("%c",&sp);
    printf("\n Enter End Point : ");
    scanf(" %c",&Ep);


    printf("/n Given Letters From %c to %c => \n", sp, Ep);


    while( sp <= Ep )
    {
        printf("\n %c",sp);
        sp++;

    }

    getch();
    return 0;

}

#include<stdio.h>
#include<conio.h>



int main()


{
    char ch = '\0';


    printf("print The Alphabates in Range v to f :\n");


    ch = 'V';


    while (ch >= 'F')
    {
        printf(" %c \n",ch);
        ch--;
    }
    getch();
    return 0;

}

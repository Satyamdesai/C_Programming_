#include<stdio.h>
#include<conio.h>


int main()

{
    int Num1,Num2;
    up :
    printf("Enter 1st Numbers:");
    scanf("%d",&Num1);
    printf("Enter 2nd numbers:");
    scanf("%d",&Num2);


    if (Num1 == Num2)
    {
        printf("Both numbers are Equals. Try other Numbers:\n ");
        getch();
        system ("cls");
        goto up;

    }


    if (Num1>Num2)
    {
        printf("The Num1 is Maximum.\n",Num1);
    }

    else
    {
        printf("The Num2 is Maximum.\n",Num2);
    }

    {
        printf("thanks to use...");
    }

        getch();
        return 0;


    }





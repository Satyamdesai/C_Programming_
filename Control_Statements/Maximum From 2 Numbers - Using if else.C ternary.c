#include<stdio.h>
#include<conio.h>


int main()

{
    int Num1,Num2;
    up :
    printf("Enter 1st Numbers:");
    scanf("%d",&Num1);
    printf("Enter 2nd Numbers:");
    scanf("%d",&Num2);


    if(Num1 == Num2)
    {
        printf("Both Numbers are Equal.\n try other Numbers are Equal.\n try other Number:\n");
        goto up;

    }

    (Num1>Num2)?printf("The Num1 Maximum.\n",Num1):printf("THe Num2 is Maximum.\n",Num1);


    {
        printf("Thanks to use...");

    }
        getch();


    return 0;



}

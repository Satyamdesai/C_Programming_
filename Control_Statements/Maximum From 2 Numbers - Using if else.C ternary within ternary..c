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


        (Num1 == Num2) ? printf("Both numbers are Equal.\n:"): ((Num1>Num2)? printf("The Num1 is maximum.\n",Num1):printf("The Num2 is maximum.\n",Num1));
        {
            printf("thaks to use...");

        }
            getch();

}

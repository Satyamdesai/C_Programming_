#include<stdio.h>
#include<conio.h>


int main ()


{
    int Num = 0;
    printf("Enter an Integer Number:");
    scanf("%d",&Num);


    if (Num == 0)
    {
        printf("The Given is Neutral.");

    }

    else if (Num > 0)
    {
        printf("The Given Number %d is positive",Num);

    }
    else
    {
         printf("The Given Number %d is negative",Num);

    }

    getch();
    return 0;

}

#include<stdio.h>
#include<conio.h>



int main()

{
    int Num =0;
    printf("Enter anInteger number:");
    scanf("%d",&Num);


    if (Num > 0)
    {
        printf("The Given Number %d is positive",Num);

    }
    else
    {
        printf("The Given number %d is Negative",Num);

    }

    getch();
    return 0;


}

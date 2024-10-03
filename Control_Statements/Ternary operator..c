#include<stdio.h>
#include<conio.h>


int main()

{
    int Number = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Number);


    if (Number == 0)
    {
       printf("The Given Number is Nutral.\n");
    }

    else (Number % 2 == 0) ? printf("The Given Number is Even.\n") : printf("the Given Number is odd.");


    getch();
    return 0;
}

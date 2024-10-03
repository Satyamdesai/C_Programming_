#include<stdio.h>
#include<conio.h>

int main()

{
    int Number =0;
    printf("Enter the number:\n");
    scanf("%d",&Number);

    if(Number % 2 == 0)

    {
        printf("The Given Number is Even.\n");
    }
    else
    {
        printf("The Given Number is odd.\n");
        getch();
        return 0;
    }
}





#include<stdio.h>
#include<conio.h>

int main()

{
    int Number = 0;
    printf("Enter the Number:\n");
    scanf("%d",&Number);

    if (Number == 0)
    {
        printf("The Given Number is Neutral.\n");
        scanf("%d",&Number);
    }

    else if (Number % 2 == 0)

    {
       printf("The Given Number is Even.\n");
    }


    else
    {
      printf("The Given Number is odd.");

    }
        getch();
        return 0;
}

























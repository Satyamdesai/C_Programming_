#include<stdio.h>
#include<conio.h>


int main()

{


    int Num1,Num2;
    {
        printf("Enter Numbers:");
    }
        scanf("%d%d",&Num1,&Num2);

        if(Num1 == Num2)
        {
            printf("Both Numbers are Equals. \n");
            goto Down;
        }


        else if (Num1>Num2)
        {
            printf("The Num1 is Maximum.\n",Num1);
        }

        else
        {
            printf("The Num2 is maximum.\n",Num2);

        }
        Down:

            getch();
            return 0;



        }
























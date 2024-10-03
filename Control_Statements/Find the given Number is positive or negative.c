#include<stdio.h>
#include<conio.h>



int main ()


{
    int Num =0;
    printf("Enter an Enteger Number:");
    scanf("%d",&Num);


    (Num > 0 )? (printf("The Given Number %d is positive ",Num )) : (printf("The GIven Number %d is  Negative",Num));

    getch();
    return 0;

}

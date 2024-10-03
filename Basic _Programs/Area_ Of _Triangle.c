#include<stdio.h>
#include<conio.h>

int main()
{
    float Height = 0, Width = 0, Area = 0;

    printf("Enter the Height:",Height);
    scanf("%f",&Height);
    printf("Enter the Width:",Width);
    scanf("%f",&Width);

    Area = Height * Width;

    printf("Area of Rectangle is:%f",Area);

    getch();


}

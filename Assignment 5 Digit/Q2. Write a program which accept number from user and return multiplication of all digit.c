#include <stdio.h>
#include <conio.h>

int main()
{
    int num, Mul = 1, digit = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;
        Mul *= digit;
        num /= 10;
    }

    printf("Sum of digits: %d\n", Mul);

    getch();
    return 0;
}

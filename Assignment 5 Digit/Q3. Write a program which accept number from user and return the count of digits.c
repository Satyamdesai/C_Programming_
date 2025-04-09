#include <stdio.h>
#include <conio.h>

int main()
{
    int num = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d\n", count);

    getch();
    return 0;
}

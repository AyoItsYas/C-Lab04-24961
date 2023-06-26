#include <stdio.h>

int main(void)
{
    int num;

    // part 1

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even\n", num);
    }
    else
    {
        printf("%d is odd\n", num);
    }

    // part 2 (re-write using switch statement)

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    case 0:
        printf("%d is even\n", num);
        break;
    case 1:

        printf("%d is odd\n", num);
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int num1, num2, choice;

    printf("Command options,\n");
    printf("  1 - Addition\n");
    printf("  2 - Subtraction\n");
    printf("  3 - Multiplication\n");
    printf("  4 - Division\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    printf("\n");

    switch (choice)
    {
    case 1:
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case 2:

        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case 3:
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case 4:
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
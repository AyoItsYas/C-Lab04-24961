#include <stdio.h>

int main(void)
{
    int choice;
    float radius;

    printf("Command options,\n");
    printf("  1 - Circumference of a circle\n");
    printf("  2 - Area of a circle\n");
    printf("  3 - Volume of a sphere\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("Enter radius      : ");
    scanf("%f", &radius);

    printf("\n");

    switch (choice)
    {
    case 1:
        printf("Circumference of a circle = %f\n", 2 * 3.14 * radius);
        break;
    case 2:
        printf("Area of a circle = %f\n", 3.14 * radius * radius);
        break;
    case 3:
        printf("Volume of a sphere = %f\n", 4.0 / 3.0 * 3.14 * radius * radius * radius);
        break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}
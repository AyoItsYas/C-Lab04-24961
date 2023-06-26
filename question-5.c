#include <stdio.h>

int main(void)
{
    int month;

    printf("Enter month number: ");
    scanf("%d", &month);

    if (month == 2)
    {
        printf("28 days\n");
    }
    else
    {
        switch (month / 2)
        {
        case 1:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
        }
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\n");

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel\n", ch);
        break;
    default:
        printf("%c is not a vowel\n", ch);
        break;
    }
    return 0;
}
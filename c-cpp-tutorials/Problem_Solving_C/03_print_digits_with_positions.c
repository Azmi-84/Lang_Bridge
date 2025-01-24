// Print Digits with  Position

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    char str[4];
    snprintf(str, sizeof(str), "%d", num);

    for (int i = 0; str[i] != '\0'; i++)
    {
        switch (i)
        {
        case 0:
            printf("First digits = %c\n", str[i]);
            break;
        case 1:
            printf("Second digits = %c\n", str[i]);
            break;
        case 2:
            printf("Third digit = %c\n", str[i]);
            break;
        case 3:
            printf("Fourth digit = %c\n", str[i]);
            break;
        case 4:
            printf("Fifth digit = %c\n", str[i]);
            break;

        default:
            printf("Invalid input !!!");
            break;
        }
    }

    return 0;
}
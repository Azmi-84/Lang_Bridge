#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The number you entered is %d\n", a);

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The string you entered is %s\n", str);

    // Operators and Expressions
    /*
    The sign of the result of a division operation is determined by the sign of the dividend (first operand).
    example:
    5 / 2 = 2
    -5 / 2 = -2
    5 / -2 = -2
    -5 / -2 = 2
    */

    printf("5 / 2 = %d\n", 5 / 2);
    printf("-5 / 2 = %d\n", -5 / 2);
    printf("5 / -2 = %d\n", 5 / -2);
    printf("-5 / -2 = %d\n", -5 / -2);

    /*
    Prefix and postfix increment and decrement operators
    example:
    int a = 5;
    printf("%d\n", a++); // 5
    printf("%d\n", a);   // 6
    printf("%d\n", ++a); // 7
    printf("%d\n", a);   // 7
    printf("%d\n", a--); // 7
    printf("%d\n", a);   // 6
    printf("%d\n", --a); // 5
    printf("%d\n", a);   // 5
    */

    // Conditional Operators
    int x = 5, y = 10;
    int max = x > y ? x : y;
    printf("The maximum of %d and %d is %d\n", x, y, max);

    // Bitwise Operators
    int p = 5, q = 10;
    printf("p & q = %d\n", p & q);   // 0101 & 1010 = 0000
    printf("p | q = %d\n", p | q);   // 0101 | 1010 = 1111
    printf("p ^ q = %d\n", p ^ q);   // 0101 ^ 1010 = 1111
    printf("~p = %d\n", ~p);         // ~0101 = 1010
    printf("p << 1 = %d\n", p << 1); // 0101 << 1 = 1010
    printf("p >> 1 = %d\n", p >> 1); // 0101 >> 1 = 0010

    // Switch case
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num)
    {
    default:
        if (num % 2 == 0)
        {
            printf("The number is even\n");
        }
        else
        {
            printf("The number is odd\n");
        }
        if (num > 0)
        {
            printf("The number is positive\n");
        }
        else if (num < 0)
        {
            printf("The number is negative\n");
        }
        else
        {
            printf("The number is zero\n");
        }
        break;
    }

    // Checking if a character is a vowel or consonant
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("The character is a vowel\n");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The character is a consonant\n");
    }
    else
    {
        printf("The character is not an alphabet\n");
    }

    // Sum of numbers in a range
    // int num1, num2;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &num1, &num2);

    // int sum = 0;
    // for (int i = num1; i <= num2; i++)
    // {
    //     sum += i;
    // }
    // printf("The sum of numbers from %d to %d is %d\n", num1, num2, sum);

    return 0; // Return 0 means the program executed successfully
}
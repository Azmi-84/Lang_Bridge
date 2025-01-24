#include <stdio.h>

int evenodd(int); // FUNCTION DECLARATION
int main()
{
    int num, flag;
    printf("Enter the number: ");
    scanf("%d", &num);
    flag = evenodd(num); // FUNCTION CALL

    if (flag == 1)
    {
        printf("%d is EVEN.", num);
    }
    else
    {
        printf("%d is ODD.", num);
    }
    return 0;
}

int evenodd(int a) // FUNCTION DEFINITION
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
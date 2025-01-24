#include <stdio.h>

int main()
{
    int num1 = 2, num2 = 3, sum = 0, mul = 0, div = 1;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    mul = sum * *ptr1;
    *ptr2 += 1;
    div = 9 + (*ptr1) / (*ptr2) - 30;

    printf("Sum: %d, Multiplication: %d, ptr2: %d, Division: %d\n", sum, mul, *ptr2, div);

    // NULL Pointer

    int *null_ptr = NULL;

    while (null_ptr == NULL)
    {
        printf("This is a null pointer !!!");
        break;
    }

    // GENERIC Pointer
    // These types of pointer type is 'void'

    void *gp;
    int value = 10;
    char ch = 'A'; // Declare and initialize 'ch'
    gp = &value;
    printf("\nGeneric pointers point to the integer value = %d\n", *(int *)gp);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char id[9];
    scanf("%s", id);
    printf("%s", id);

    if (strlen(id) != 9)
    {
        printf("Invalid input !!!");
    }
}
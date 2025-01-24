// Book: Data Structure using C || Page: 40

// Programming Excercise

#include <stdio.h>

// Problem 1

// int main()
// {
//     int num[10];
//     printf("Enter 10 numbers in the below: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("num %d: ", i + 1);
//         scanf("%d", &num[i]);
//     }

//     printf("The numbers are: ");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", num[i]);
//         if ((i + 1) % 3 == 0 || i == 9)
//         {
//             printf("\n");
//         }
//         else
//         {
//             printf(", ");
//         }
//     }

//     return 0;
// }

// Problem 2

// int main()
// {
//     int sum = 0;
//     for (int i = 1; i <= 200; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("Sum of the first 200 even numbers: %d", sum);
// }

// Problem 3

// int main()
// {
//     char ch[100];
//     int vowel_sum = 0, consonant_sum = 0;

//     printf("Enter the text here: ");
//     scanf("%s", ch);

//     for (int i = 0; ch[i] != '\0'; i++)
//     {
//         if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
//         {
//             vowel_sum += 1;
//         }
//         else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
//         {
//             consonant_sum += 1;
//         }
//     }
//     printf("Total vowels in this text are %d and consonants are %d", vowel_sum, consonant_sum);
// }

// Problem 4

// int main()
// {
//     char address[100];

//     printf("Write your address using commas to separate the components: ");
//     fgets(address, sizeof(address), stdin);

//     int comma_found = 0;
//     int i = 0;

//     while (address[i] != '\0')
//     {
//         if (address[i] == ',')
//         {
//             comma_found = 1;
//             printf("\nPlease use commas to separate the address components.\n");
//         }
//         else
//         {
//             printf("%c", address[i]);
//         }
//         i++;
//     }

//     if (!comma_found)
//     {
//         printf("\nYou haven't used commas to separate the components!!!\n");
//     }

//     return 0;
// }

// Problem 6

// int main()
// {
//     float num = 34.3;
//     int right_most_integer = (int)num % 10;
//     printf("Right most number: %d", right_most_integer);
// }

// Problem 8

// int main()
// {
//     float salary = 3433.3;
//     float HRA = salary * 0.1;
//     float TA = salary * 0.05;
//     float total_salary = salary + HRA + TA;
//     printf("Your salary: %f", total_salary);
// }

// Electric Bill Problem

// int main()
// {
//     int units = 43;
//     float bill;

//     if (units <= 50)
//     {
//         bill = units * 0.50 + units * 0.15;
//         printf("Total bill is %f", bill);
//     }

//     return 0;
// }

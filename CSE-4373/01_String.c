#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

typedef struct information
{
    int customerid;
    char name[50];
    int bread;
    float milk;
    float rice;
    float chicken;
} one;

one getInformation()
{
    one customer;

    printf("Customer ID: ");
    scanf("%d", &customer.customerid);
    getchar();
    printf("Name: ");
    fgets(customer.name, 50, stdin);
    printf("Quantity of Bread: ");
    scanf("%d", &customer.bread);
    printf("Quantity of Milk (Litter): ");
    scanf("%f", &customer.milk);
    printf("Quantity of the Rice(kg): ");
    scanf("%f", &customer.rice);
    printf("Quantity of the Chicken(kg): ");
    scanf("%f", &customer.chicken);

    return customer;
}

float calculateExpenditure(one *customer)
{
    float total = 0;
    total = (customer->bread * 10.00) + (customer->milk * 15.00) + (customer->chicken * 30.00) + (customer->rice * 25.00);

    if (total > 500)
    {
        total = total - (total * .1);
    }
    return total;
}

typedef struct admissionMark
{
    int answered;
    int wrongAnswered;
} admissionMark;

admissionMark getAdmissionMark()
{
    admissionMark students;

    printf("Answered Questions: ");
    scanf("%d", &students.answered);
    printf("Wrong answered: ");
    scanf("%d", &students.wrongAnswered);

    return students;
}

float admissionRes(admissionMark *students)
{
    float res = 0;
    res = ((students->answered * 1) - (students->wrongAnswered * .25));

    return res;
}
int main()
{
    int year = 0;
    printf("Year: ");
    scanf("%d", &year);
    int res = isLeapYear(year);

    if (res == 0)
    {
        printf("Not Leap Year !!!\n");
    }
    else
    {
        printf("Leap Year !!!\n");
    }

    one customer = getInformation();
    float totalCost = calculateExpenditure(&customer);

    printf("Total expenditure: %.2f\n", totalCost);

    admissionMark student = getAdmissionMark();
    float score = admissionRes(&student);

    printf("Student answered: %d, Wrong answered: %d\n", student.answered, student.wrongAnswered);

    if (score < 40)
    {
        printf("Not eligible!!!");
    }
    else if (score >= 40 && res < 70)
    {
        printf("Self Financed");
    }
    else if (score >= 70 && score < 95)
    {
        printf("Partial Scholarship");
    }
    else if (score >= 95)
    {
        printf("Full Scholarship");
    }

    return 0;
}

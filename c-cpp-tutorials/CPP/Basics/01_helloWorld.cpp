#include <iostream>

int five()
{
    return 5;
}

int main()
{
    std::cout << "Assalmualikum Wa Rahmatullahi Wabaratuh!\n";
    std::cout << "Hello World!\n";

    // Variable declaration and initialization

    int first_val = 10;
    std::cout << "Value of first variable: " << first_val
              << std::endl;

    // This is called list initialization and the value is called initializer.

    int second_var{20};

    std::cout << "Value of second variable: " << second_var
              << std::endl;

    int third_var{};
    std::cout << "Value of third variable: " << third_var
              << std::endl;

    // int fourth_var{4.5}; // List initialization will not allow narrowing conversion.
    // std::cout << "Value of fourth variable: " << fourth_var
    //   << std::endl;

    int fifth_var = 5.5; // This is called copy initialization.
    std::cout << "Value of fifth variable: " << fifth_var
              << std::endl;

    double pi{3.14159};
    double phi{1.6180339887};
    double e{2.71828182845904523536};
    [[maybe_unused]] double euler{0.5772156649};

    std::cout << "Value of pi: " << pi << std::endl;
    std::cout << "Value of phi: " << phi << std::endl;
    std::cout << "Value of e: " << e << std::endl;

    std::cout << "Enter a number: ";
    int num{};

    std::cin >> num;

    std::cout << "You entered: " << num << std::endl;

    int sum = five() + num;
    std::cout << "Sum of 5 and " << num << " is: " << sum << std::endl;

    return 0;
}
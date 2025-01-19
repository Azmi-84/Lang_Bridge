#include <iostream>
#include <cmath>

#define g 9.8

using namespace std;

float calculateFrictionalCoefficient(float mass, float frictionalForce)
{
    if (mass == 0)
    {
        cout << "Error: Mass cannot be zero." << endl;
        return NAN;
    }
    return frictionalForce / (mass * g);
}

int main()
{
    float m, f;

    cout << "Enter the mass of the object (kg): ";
    cin >> m;
    cout << "Enter the frictional force (N): ";
    cin >> f;

    float coefficient = calculateFrictionalCoefficient(m, f);

    if (std::isnan(coefficient))
    {
        cout << "Computation failed due to invalid input." << endl;
    }
    else
    {
        float angle = atan(coefficient) * (180.0 / M_PI);
        cout << "The coefficient of friction is " << coefficient << " and the angle is " << angle << " degrees." << endl;
    }

    return 0;
}

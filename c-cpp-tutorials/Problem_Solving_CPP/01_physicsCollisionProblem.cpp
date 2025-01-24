#include <iostream>
#include <cmath>
#include <unordered_map>
#include <vector>
#include <tuple>

using namespace std;

// Check if a number is NaN (Not a Number)
bool is_nan(double x)
{
    return isnan(x);
}

// Function to solve for two missing values
tuple<double, double> solve_missing(string var1, string var2, unordered_map<string, double> &vars)
{
    double m1 = vars["m1"], m2 = vars["m2"];
    double u1 = vars["u1"], u2 = vars["u2"];
    double v1 = vars["v1"], v2 = vars["v2"];

    if (var1 == "v1" && var2 == "v2")
    {
        // Solve for final velocities
        double v1 = ((m1 - m2) / (m1 + m2)) * u1 + ((2 * m2) / (m1 + m2)) * u2;
        double v2 = ((m2 - m1) / (m1 + m2)) * u2 + ((2 * m1) / (m1 + m2)) * u1;
        return {v1, v2};
    }
    else if (var1 == "u1" && var2 == "u2")
    {
        // Solve for initial velocities
        double u1 = ((m1 + m2) * v1 - 2 * m2 * v2) / (m1 - m2);
        double u2 = ((m1 + m2) * v2 - 2 * m1 * v1) / (m2 - m1);
        return {u1, u2};
    }
    else if (var1 == "m1" && var2 == "m2")
    {
        // Solve for masses
        double m1 = ((2 * v2 - u2) / (u1 - v1)) * (m2 + m1);
        double m2 = ((2 * v1 - u1) / (u2 - v2)) * (m1 + m2);
        return {m1, m2};
    }
    return {0, 0}; // Default return (should never reach here)
}

// General function to determine missing values and solve
void find_missing_values(double m1, double m2, double u1, double u2, double v1, double v2)
{
    unordered_map<string, double> vars = {
        {"m1", m1}, {"m2", m2}, {"u1", u1}, {"u2", u2}, {"v1", v1}, {"v2", v2}};

    vector<string> missing;

    // Identify missing variables
    for (const auto &kv : vars)
    {
        if (is_nan(kv.second))
        {
            missing.push_back(kv.first);
        }
    }

    if (missing.size() != 2)
    {
        cout << "Error: Must have exactly two missing values." << endl;
        return;
    }

    // Solve for missing values
    auto [val1, val2] = solve_missing(missing[0], missing[1], vars);

    // Update values in map
    vars[missing[0]] = val1;
    vars[missing[1]] = val2;

    // Print results
    cout << "Calculated Values:\n";
    for (const auto &kv : vars)
    {
        cout << kv.first << " = " << kv.second << endl;
    }
}

int main()
{
    // Example: Given m1, m2, u1, u2, and missing v1, v2
    find_missing_values(5, 3, 10, -5, NAN, NAN);

    return 0;
}

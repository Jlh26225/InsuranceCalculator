// Many financial experts advise property owners to insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure. 
// Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance that should be purchased for the property.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare variables for replacement cost and minimum insurance
    double replacementCost, minInsurance;
    const double INSURANCE_PERCENTAGE = 0.80;

    // Get the replacement cost from the user
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate 80 percent of the replacement cost
    minInsurance = replacementCost * INSURANCE_PERCENTAGE;

    // Display the result formatted as currency
    cout << fixed << setprecision(2);
    cout << "\n----------------------------------------" << endl;
    cout << "Minimum amount of insurance needed: $" << minInsurance << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
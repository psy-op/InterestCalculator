// InterestCalculator
// TITLE: Compound Interest Calculator

#include<iostream>
using namespace std;

int main()
{
    // Variables to store user input and calculation results
    float amount, interest, year, end = 1;

    // Asks the user for input
    cout << "Enter Amount: ";
    cin >> amount;
    cout << "Enter Rate of Interest: ";
    cin >> interest;
    cout << "Enter Years: ";
    cin >> year;

    // Prints the table header
    cout << "Year" << "\t" << "Amount on deposit" << endl;

    // Prints the year and specified amount after the interest
    while (end <= year) {
        amount = amount + amount * interest;
        cout << end << "\t\t" << amount << endl;
        end += 1;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year > 0) // Check if the input is a valid year
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " is a leap year." << endl;
        }
        else
        {
            cout << year << " is not a leap year." << endl;
        }
    }
    else
    {
        cout << "Input is not a valid year" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int currYear = 2024;
    int inputYear;

    cout << "Enter a year: ";
    cin >> inputYear;
    cout << "\n All the leap years form " << inputYear << " to 2024 are: ";
    for (int i = inputYear; i <= 2024; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
        {
            cout << i << " ";
        }
    }
}
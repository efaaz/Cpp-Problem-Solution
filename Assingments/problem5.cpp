// Create an array to store 5 years by taking inputs from the user. Now, develop a program that checks each year present in the array to determine if the year is a leap year and prints only the leap years from the array.

#include <iostream>
using namespace std;
int main()
{
    int years[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter year " << i + 1 << ": ";
        cin >> years[i];
    }
    cout << "Leap years:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if ((years[i] % 4 == 0 && years[i] % 100 != 0) || years[i] % 400 == 0)
        {
            cout << years[i] << endl;
        }
    }

    return 0;
}
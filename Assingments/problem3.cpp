// Take any 4 integer numbers into 4 variables that are input through the keyboard. Write a program to find out the 2nd smallest number among 4 numbers. (Using If-else)

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    if (a < b && a < c && a < d)
    {
        if (b < c && b < d)
        {
            cout << "2nd smallest number is: " << b;
        }
        else if (c < b && c < d)
        {
            cout << "2nd smallest number is: " << c;
        }
        else
        {
            cout << "2nd smallest number is: " << d;
        }
    }
    else if (b < a && b < c && b < d)
    {
        if (a < c && a < d)
        {
            cout << "2nd smallest number is: " << a;
        }
        else if (c < a && c < d)
        {
            cout << "2nd smallest number is: " << c;
        }
        else
        {
            cout << "2nd smallest number is: " << d;
        }
    }
    else if (c < a && c < b && c < d)
    {
        if (a < b && a < d)
        {
            cout << "2nd smallest number is: " << a;
        }
        else if (b < a && b < d)
        {
            cout << "2nd smallest number is: " << b;
        }
        else
        {
            cout << "2nd smallest number is: " << d;
        }
    }
    else
    {
        if (a < b && a < c)
        {
            cout << "2nd smallest number is: " << a;
        }
        else if (b < a && b < c)
        {
            cout << "2nd smallest number is: " << b;
        }
        else
        {
            cout << "2nd smallest number is: " << c;
        }
    }
    return 0;
}
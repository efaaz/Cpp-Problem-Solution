// input a number and reverse the number and print
#include <iostream>
using namespace std;

int main()
{
    int num, count, multiples;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a cout: ";
    cin >> count;

    for (int i = 0; i <= count; i++)
    {
        multiples = num * i;
        cout << num << " x " << i << " = " << multiples << endl;
    }

    return 0;
}

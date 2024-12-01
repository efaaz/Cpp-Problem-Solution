#include <iostream>
using namespace std;

int main()
{
    int N = 8;
    int years[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Input Year " << i + 1 << ": ";
        cin >> years[i];
        while (years[i] < 1000 || years[i] > 2024)
        {
            cout << "Invalid year. Input Year " << i + 1 << ": ";
            cin >> years[i];
        }
    }
    cout << "Years that are not Leap years are: ";
    for (int i = 0; i < N; i++)
    {

        if ((years[i] % 4 != 0) || (years[i] % 100 == 0 && years[i] % 400 != 0))

        {
            cout << years[i] << " " << endl;
        }
    }
}
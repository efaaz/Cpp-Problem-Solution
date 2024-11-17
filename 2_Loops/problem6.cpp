// input a number and reverse the number and print
#include <iostream>
using namespace std;

int main()
{
    int N, evenCount = 0, oddCount = 0;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            ++evenCount;
        }
        else
        {
            ++oddCount;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}

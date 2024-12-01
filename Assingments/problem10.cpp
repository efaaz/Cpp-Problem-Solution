#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;

    cout << "Perfect numbers are:" << endl;

    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i && i > 1)
        {
            cout << i << " ";
        }
    }
    return 0;
}

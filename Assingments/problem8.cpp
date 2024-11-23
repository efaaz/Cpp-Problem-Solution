#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 3, 1, 6};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
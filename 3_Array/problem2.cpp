// Create an array to store five integer numbers by asking user for the inputs. Now, develop a program that checks whether each number present in the array is an even number or an odd number and replaces the even numbers with a ‘0’ and odd numbers with a ‘1’. Later, the program prints the modified array.
#include <iostream>
using namespace std;

int main()
{
    const int size = 5;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int value = arr[i];
        if (value % 2 == 0)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    cout << "Values in array are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

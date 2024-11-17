#include <iostream>
using namespace std;
int main()
{

    int firstNum, secondNum, sum = 0;
    cout << "Enter first number" << endl;
    cin >> firstNum;
    cout << "Enter second number" << endl;
    cin >> secondNum;

    for (firstNum; firstNum < secondNum; firstNum++)
    {
        if (firstNum % 2 == 0)
        {
            sum = sum + firstNum;
        }
        }
    cout <<"The sum of between this two number is: "<< sum << endl;
    return 0;
}
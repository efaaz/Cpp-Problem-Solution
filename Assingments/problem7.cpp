/* Write a C++ program to reverse a number.
 **Sample Input:** 45819
 **Sample Output:** 91854
*/

#include <iostream>
using namespace std;
int main()
{
    int num, revNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0)
    {
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }
    cout << "Reversed Number: " << revNum << endl;
}
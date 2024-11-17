// input a number and reverse the number and print 
#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;
    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        remainder = num % 10;                                      // remainder contains the last digit
        reversedNum = reversedNum * 10 + remainder;               // reversedNum = 0 * 10 + 4 = 4
        num = num / 10;                                          // 1234 / 10 = 123
    }

    cout << "Reversed Number: " << reversedNum << endl;
    return 0;
}

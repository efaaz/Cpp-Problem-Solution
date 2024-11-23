// Write a program that calculates the sum of the first n terms of the series 1 + 1/2 + 1/3 + ... + 1/n. The program should ask the user to enter the value of n, and then use a loop to calculate the sum.

#include <iostream>
using namespace std;
int main(){
    int n;
    float sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i =1; i <= n; i++){
        sum += 1.0/i;
    }
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}
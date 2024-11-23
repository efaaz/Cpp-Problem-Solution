// Take any letter input through the keyboard. Write a program to find out whether it is a vowel or a consonant. For non-alphabet inputs, the output will be “Not a character” (Using If-else and switch case).

#include <iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter a character: ";
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << c << " is a vowel" << endl;
                break;
            default:
                cout << c << " is a consonant" << endl;
        }
    } else {
        cout << "Not a character" << endl;
    }
}
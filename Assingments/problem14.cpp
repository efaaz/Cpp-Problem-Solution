#include <iostream>
using namespace std;

int main()
{

    float classes, attended, perc;
    cout << "Enter total classes" << endl;
    cin >> classes;
    cout << "Enter total class attended" << endl;
    cin >> attended;
    perc = (attended / classes) * 100;

    if (perc >= 80)
    {
        cout << "Allowed to sit for the exam" << endl;
    }
    else if (perc < 80)
    {
        cout << "Not Allowed to sit for the exam" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
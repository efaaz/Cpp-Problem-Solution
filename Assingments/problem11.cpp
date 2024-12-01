#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of students: ";
    cin >> N;
    float quiz_1[N];
    float quiz_2[N];
    float worst_quiz[N];
    cout << "\nEnter the marks of quiz 1: ";
    for (int i = 0; i < N; i++)
    {
        cin >> quiz_1[i];
    }
    cout << "\nEnter the marks of quiz 2: ";
    for (int i = 0; i < N; i++)
    {
        cin >> quiz_2[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (quiz_1[i] < quiz_2[i])
        {
            worst_quiz[i] = quiz_1[i];
        }
        else
        {
            worst_quiz[i] = quiz_2[i];
        }
    }
    cout << "\nWorst quiz marks: ";
    for (int i = 0; i < N; i++)
    {
        cout << worst_quiz[i] << " ";
    }
    return 0;
}
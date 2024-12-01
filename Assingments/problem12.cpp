#include <iostream>
using namespace std;

int main()
{
    int score[10];
    int totalScore = 0;
    int avgScore;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the score of athletes " << i + 1 << ": ";
        cin >> score[i];
        while (score[i] < 0 || score[i] > 100)
        {
            cout << "Invalid score. Enter the score of athletes " << i + 1 << ": ";
            cin >> score[i];
        }
        totalScore += score[i];
    }
    avgScore = totalScore / 10;
    if (avgScore > 85)
    {
        cout << "Overall outstanding performance." << endl;
    }
    else if (avgScore <= 84 && avgScore >= 70)
    {
        cout << "Good performance." << endl;
    }
    else if (avgScore < 70)
    {
        cout << "Overall improvement needed." << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        if (score[i] > avgScore)
        {
            count++;
        }
    }
    cout << "Number of athletes scored more than average: " << count << endl;
    if (count > 5)
    {
        cout << "Individual performance is good." << endl;
    }
    else
    {
        cout << "Individual improvement needed." << endl;
    }

    return 0;
}
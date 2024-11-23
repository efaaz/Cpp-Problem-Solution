/* Write a C++ program to draw the following pattern for the input n.
   **Hint:** nested loop

   **Input:**
   Enter a number: 3

   **Output:**
   ```
   1
   1 2
   1 2 3
   ```
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
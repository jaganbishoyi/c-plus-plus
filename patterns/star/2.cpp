#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print 1st half
        // Print spaces
        for (int space = 0; space < i - 1; space++)
        {
            cout << " ";
        }
        // Print stars
        for (int star = 0; star <= n - i; star++)
        {
            cout << "*";
        }
        // Print 2nd half
        // Print stars
        for (int star = 0; star < n - i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
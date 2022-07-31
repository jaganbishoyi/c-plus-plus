#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // Print 1st half
        // Print Spaces
        for (int space = 0; space < n - i; space++)
        {
            cout << "   ";
        }
        // Print *
        for (int star = 0; star < i; star++)
        {
            cout << " * ";
        }

        // Print 2nd half
        // Print *
        for (int star = 0; star < i - 1; star++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
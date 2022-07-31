#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print 1st half
        //  Print space
        for (int space = 0; space < n - (i + 1); space++)
        {
            cout << " ";
        }

        // Print *
        for (int star = 0; star <= i; star++)
        {
            cout << "*";
        }
        // Print 2nd half
        //  Print *
        for (int star = 0; star < i; star++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int j = 0; j < n - 1; j++)
    {
        // Print 1st half
        // Print space
        for (int space = 0; space <= j; space++)
        {
            cout << " ";
        }
        // Print *
        for (int star = 0; star < n - 1 - j; star++)
        {
            cout << "*";
        }
        // Print *
        for (int star = 0; star < n - 2 - j; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
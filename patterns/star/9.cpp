#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print Section 1
        for (int space = 0; space < n - 1 - i; space++)
        {
            cout << " ";
        }

        // Print Section 2
        cout << "*";
        // Print Section 3
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        // Print Section 4
        for (int space = 0; space < i - 1; space++)
        {
            cout << " ";
        }
        // Print Section 5
        if (i != 0)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int j = 0; j < n - 1; j++)
    {
        // Print Section 6
        for (int space = 0; space <= j; space++)
        {
            cout << " ";
        }

        // Print Section 7
        cout << "*";

        // Print Section 8
        for (int space = 0; space < n - 2 - j; space++)
        {
            cout << " ";
        }

        // Print Section 9
        for (int space = 0; space < n - 3 - j; space++)
        {
            cout << " ";
        }
        // Print Section 10
        if (j != n - 2)
        {
            cout << "*";
        }

        cout << endl;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print 1st half
        // print *
        for (int star = 0; star < n - i; star++)
        {
            cout << "*";
        }
        // print space
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }

        // Print 2nd half
        // print space
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        // Print *
        for (int star = 0; star < n - i; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int j = 0; j < n - 1; j++)
    {
        // Print 1st half
        // Print *
        for (int star = 0; star <= j + 1; star++)
        {
            cout << "*";
        }
        // Print space
        for (int space = 1; space < n - 1 - j; space++)
        {
            cout << " ";
        }

        // 2nd half
        // Print space
        for (int space = 1; space < n - 1 - j; space++)
        {
            cout << " ";
        }
        // Print *
        for (int star = 0; star <= j + 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
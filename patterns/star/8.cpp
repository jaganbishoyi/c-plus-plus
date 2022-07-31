#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print space
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
}
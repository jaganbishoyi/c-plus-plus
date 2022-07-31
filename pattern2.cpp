#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    int i = 1;
    int value = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << value;
            j = j + 1;
            value = value + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
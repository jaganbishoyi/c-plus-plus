#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char character = 'A' + i - 1;
        while (j <= i)
        {
            cout << character;
            j++;
        }
        cout << endl;
        i++;
    }
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1 = 0, n2 = 1, n3;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;

            if (i == n - 1)
            {
                cout << n3;
            }
        }
    }

    cout << endl;
}
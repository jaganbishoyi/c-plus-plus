#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int n1 = (n + 1) / 2;
    int n2 = n1 - 1;

    int i = 1;
    while (i <= n1)
    {
        int j = 1;
        while (j <= n2)
        {
            cout << " ";
            j++;
        }

        n2--;

        int k = 1;
        while (k <= (2 * i) - 1)
        {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    n2 = 1;
    i = 1;
    while (i <= (n1 - 1))
    {
        int j = 1;
        while (j <= n2)
        {
            cout << " ";
            j++;
        }

        n2++;

        int k = 1;
        while (k <= (2 * (n1 - i)) - 1)
        {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }
}
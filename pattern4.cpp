#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = i;
        int k = 1;
        while (k <= i)
        {
            cout << j;
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
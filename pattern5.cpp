#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int l = 1;
        while (l <= n - i)
        {
            cout << ".";
            l++;
        }
        int j = i;
        int k = 1;
        while (k <= i)
        {
            cout << j;
            j++;
            k++;
        }

        cout << endl;
        i++;
    }
}
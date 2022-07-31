#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int i = 1;
    int n = 1;

    while (i <= x)
    {
        int cal = 3 * n + 2;
        if (cal % 4 != 0)
        {
            cout << cal << " ";
            i++;
        }
        n++;
    }
}
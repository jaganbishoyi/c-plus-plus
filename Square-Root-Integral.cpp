#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i <= n)
    {
        int square = i * i;
        if (square < n)
        {
            i++;
        }
        else if (square == n)
        {
            break;
        }
        else
        {
            i--;
            break;
        }
    }

    cout << i;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }

        int num = i;
        int j = 1;
        while (j <= i)
        {
            cout << num;
            num++;
            j++;
        }

        num = num - 1;
        while (num > i)
        {
            cout << num - 1;
            num--;
        }

        cout << endl;
        i++;
    }
}
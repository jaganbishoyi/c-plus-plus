#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int num = i;
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num = num + (n - 1) - j;
        }
        cout << endl;
        i++;
    }
}
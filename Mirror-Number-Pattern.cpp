#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }

        int num = 1;
        while (num <= i)
        {
            cout << num;
            num++;
        }

        cout << endl;

        i++;
    }
}
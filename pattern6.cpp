#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;

    int i = 1;
    int k = 1;

    while (i <= n)
    {
        int l = 1;
        while(l <= n-i){
            cout << " ";
            l++;
        }

        int j = 1;
        while (j <= k)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
        k = k + 2;
    }
}
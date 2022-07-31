#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    bool isDec = true;
    int i = 1, c;
    while (i <= n - 1)
    {
        cin >> c;
        if (c == p)
        {
            isDec = false;
            break;
        }
        else if (c > p)
        {
            if (isDec == true)
            {
                isDec = false;
            }
            isDec = true;
            p = c;
        }
        else if (c < p)
        {
            if (isDec == false)
            {
                isDec = true;
            }
            isDec = false;
            p = c;
        }

        i++;
    }

    if (isDec)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

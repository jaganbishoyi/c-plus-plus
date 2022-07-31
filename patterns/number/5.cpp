#include <iostream>
using namespace std;
bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }

    return false;
};

void printNum(int num, int i)
{
    for (int j = 0; j < i; j++)
    {
        cout << num;
        num += 2;
    }
}
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        if (isEven(i))
        {
            printNum(2, i);
        }
        else
        {
            printNum(1, i);
        }
        cout << endl;
        i++;
    }
}
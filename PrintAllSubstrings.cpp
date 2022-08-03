#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char input[])
{
    int length = strlen(input);
    for (int k = 1; k <= length; k++)
    {
        for (int i = 0; i <= length - k; i++)
        {
            for (int j = i; j <= i + k - 1; j++)
            {
                cout << input[j];
            }
            cout << endl;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
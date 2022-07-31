#include <iostream>
using namespace std;

int main()
{
    int a = 10; // 4 bytes
    int b = 15;
    int c = a + b;
    cout << c << endl;

    char d = 'X'; // 1 byte
    cout << d << endl;

    float f = 1.25; // 4 bytes
    cout << f << endl;

    double d1 = 2.456; // 8 bytes
    cout << d1 << endl;

    bool bo = true; // 1 byte
    cout << bo << endl;

    int size = sizeof(d1);
    cout << size << endl;
}
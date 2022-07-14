#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int basic;
    char grade;

    cin >> basic >> grade;

    double hra = (basic * 20.0) / 100;
    double da = (basic * 50.0) / 100;
    int allow;
    double pf = (basic * 11.0) / 100;

    if (grade == 'A')
    {
        allow = 1700;
    }
    else if (grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }

    double totalSalary = basic + hra + da + allow - pf;

    cout << int(totalSalary + 0.5) << endl;
}
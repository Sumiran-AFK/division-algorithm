#include<iostream>
#include<cmath>
#include<iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
int main()
{
    int a, d, r, q;
    cout << "Enter the divident:";
    cin >> a;
    cout << "Enter the divident:";
    cin >> d;
    r = a % d;
    q = a / d;
    if (a>0 && d>0 )
    {
        cout << a << " = (" << q << ") (" << d << ") +" << r;
        cout << endl;
    }
    else if (a>0 && d<0)
    {
        cout << a << " = (" << q << ") (" << d << ") +" << r;
        cout << endl;
    }
    else if (a<0 && d>0)
    {
        cout << a << " = (" << q-1 << ") (" << d << ") +" << r+3;
        cout << endl;
    }
    else
    {
        cout << a << " = (-" << q+1 << ") (" << d << ") +" << r+3;
        cout << endl;
    }
    return 0;
}

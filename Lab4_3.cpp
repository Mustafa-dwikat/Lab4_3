#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x, f;
    cout << "pls enter an integer : ";
    cin >> x;
    f = (pow(x, 3) - 4 * (x + 20)) / 2;
    cout << "f(" << x << ") = " << f << endl;
    f = (pow((x - 1), 3) - 4 * ((x - 1) + 20)) / 2;
    cout << "f(" << x - 1 << ") = " << f - 1 << endl;
    f = (pow((x + 1), 3) - 4 * ((x + 1) + 20)) / 2;
    cout << "f(" << x + 1 << ") = " << f + 1 << endl;
}
#include <iostream>
using namespace std;
int division(int a, int b)
{
    if (b == 0)
        throw 1.5;
    return a / b;
}
int main()
{

    int x = 10, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (double e)
    {
        cout << "Divison by zero";
    }
}

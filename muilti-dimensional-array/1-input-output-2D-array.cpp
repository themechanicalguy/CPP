// Input Output And Array Index
#include <iostream>
using namespace std;
int main()
{
    int r, c, key;
    cin >> r >> c;
    int A[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << i << j << " ";
        }
        cout << endl;
    }

    return 0;
}

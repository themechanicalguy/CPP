#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] == key)
            {
                cout << "Element Found At " << i << " " << j << endl;
                return 0;
            }
        }

        cout << "Element not found";
        return 0;
    }

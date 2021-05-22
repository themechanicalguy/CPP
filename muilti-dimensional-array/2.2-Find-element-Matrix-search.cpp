#include <iostream>
using namespace std;
int main()
{
    int r, c, key;
    cin >> r >> c >> key;
    int M[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> M[i][j];
        }
    }

    int row = 0, col = c - 1;

    while (row < r and col >= 0)
    {
        if (M[row][col] == key)
        {
            cout << "Found";
            return 0;
        }
        else if (M[row][col] > key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}

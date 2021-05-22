// Order of O(n2)
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int A[m][n];
    //Taking input for the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << endl;
    //Spiral Order Print
    int row_start = 0,
        row_end = n - 1,
        col_start = 0,
        col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        //For row start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << A[row_start][col] << " ";
        }
        //After printing first row increase row count by 1
        row_start++;

        //For col end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << A[row][col_end] << " ";
        }
        col_end--;

        //For Row end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << A[row_end][col] << " ";
        }
        row_end--;

        //For Col start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << A[row][col_start] << " ";
        }
        col_start++;
    }

    return 0;
}

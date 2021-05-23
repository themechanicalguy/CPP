#include <iostream>
using namespace std;
int deleteElement(int A[], int N, int key)
{
    int pos;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == key)
        {
            pos = i;
            break;
        }
    }
    while (pos < N)
    {
        A[pos++] = A[pos + 1];
    }
    return 0;
}
int main()
{
    int A[] = {11, 15, 6, 8, 9, 10};
    int N = sizeof(A) / sizeof(A[0]);
    int key = 6;

    deleteElement(A, N, key);
    cout << "Modified array is \n";
    for (int i = 0; i < N - 1; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

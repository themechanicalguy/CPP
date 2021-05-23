#include <iostream>
using namespace std;
int removeDuplicates(int A[], int N)
{
    if (N == 0 || N == 1)
    {
        return N;
    }
    int temp[N];
    int j = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] != A[i + 1])
        {
            temp[j++] = A[i];
        }
    }
    temp[j++] = A[N - 1];

    //Modifying original array
    for (int i = 0; i < j; i++)
    {
        A[i] = temp[i];
    }
    return j;
}
int main()
{
    int A[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int size = removeDuplicates(A, n);

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

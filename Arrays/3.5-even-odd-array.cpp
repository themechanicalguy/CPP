#include <iostream>
using namespace std;
void swap(int *a, int *b);
void segregateEvenOdd(int A[], int n)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        while (A[l] % 2 == 0 && l < r)
        {
            l++;
        }
        while (A[r] % 2 == 1 && l < r)
        {
            r--;
        }
        if (l < r)
        {
            swap(&A[l], &A[r]);
            l++;
            r--;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int A[] = {12, 34, 45, 9, 8, 90, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int i = 0;
    segregateEvenOdd(A, n);
    cout << "Array after segregation" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}

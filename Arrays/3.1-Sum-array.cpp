#include <iostream>
using namespace std;
int sumArray(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int arr[] = {2, 5, 7, 8, 2, 6, 9};
    int n = 7;
    int sum = sumArray(arr, n);
    cout << "The array sum is " << sum << endl;
    cout << endl;
    return 0;
}
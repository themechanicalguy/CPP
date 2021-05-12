// Find sum of negative and positive integers in an array.

#include <iostream>
using namespace std;
int countPositiveNumbers(int A[], int n)
{
    int pos_count = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (A[i] > 0)
            pos_count++;
    }
    return pos_count;
}
int countNegativeNumbers(int A[], int n)
{
    int neg_count = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (A[i] < 0)
            neg_count++;
    }
    return neg_count;
}
// Function to print the array
void printArray(int A[], int n)
{
    int i;

    cout << "Array: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ,";
    }
    cout << endl;
}
// Driver program
int main()
{
    int A[] = {2, -1, 5, 6, 0, -3};
    int n;
    n = sizeof(A) / sizeof(A[0]);

    printArray(A, n);

    cout << "Count of Positive elements " << countPositiveNumbers(A, n) << endl;
    cout << "Count of Negative elements " << countNegativeNumbers(A, n) << endl;

    return 0;
}

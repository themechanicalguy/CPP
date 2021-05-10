// C++ program to find maximum in arr[] of size n
#include <bits/stdc++.h>
using namespace std;

int largest(int A[], int n)
{
    int i;

    // Initialize maximum element
    int max = A[0];

    // Traverse array elements from second and compare every element with current max
    for (i = 1; i < n; i++)
        if (A[i] > max)
            max = A[i];

    return max;
}

// Driver Code
int main()
{
    int A[] = {10, 324, 45, 90, 9808};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Largest in given array is "
         << largest(A, n);
    return 0;
}

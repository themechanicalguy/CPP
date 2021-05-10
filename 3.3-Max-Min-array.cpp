// CPP program to find minimum (or maximum) element in an array.
#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int mini = arr[0];
    for (int i = 1; i < n; i++)
        mini = min(mini, arr[i]);
    return mini;
}

int getMax(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
        maxi = max(maxi, arr[i]);
    return maxi;
}

int main()
{
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n) << "\n";
    cout << "Maximum element of array: " << getMax(arr, n);
    return 0;
}

// find Largest sum contiguous Subarray [V. IMP]
#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int sum = 0, maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxsum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int n, r;
    cout << "Enter the no of elements of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    r = maxSum(arr, n);
    cout << "The maximum sum contagious in subarray is:" << r << endl;
    ;
}
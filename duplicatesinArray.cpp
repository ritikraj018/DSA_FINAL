// Find Duplicates in an array
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int n)
{
    sort(arr, arr + n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return arr[i];
        }
        else
            return -1;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n:-\n";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array of size " << n + 1 << " :-\n";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate no in the array is: " << findDuplicate(arr, n) << endl;
    return 0;
}
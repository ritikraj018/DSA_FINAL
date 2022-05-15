// Minimise the maximum difference between heights [V.IMP]
#include <bits/stdc++.h>
using namespace std;

int minimizeHeight(int arr[], int n, int k)
{
    int res;
    sort(arr, arr + n);
    int minn = arr[0];
    int maxx = arr[n - 1];
    res = maxx - minn;

    for (int i = 1; i < n; i++)
    {
        maxx = max(arr[i - 1] + k, arr[n - 1] - k);
        minn = min(arr[i] - k, arr[0] + k);
        if (minn < 0)
            continue;
        res = min(res, maxx - minn);
    }
    return res;
}

int main()
{
    int n, res, k;
    cout << "Enter the no of elements of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value of k:" << endl;
    cin >> k;
    cout << "Minimized maximum difference between heights is: " << minimizeHeight(arr, n, k) << endl;

    return 0;
}
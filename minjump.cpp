// Minimum no of jumps require to reach the end of the array
#include <bits/stdc++.h>
using namespace std;

int minJump(int arr[], int n)
{
    int maxr = arr[0], step = arr[0], jump = 1;
    if (n == 1)
        return 0;
    else if (arr[0] == 0)
        return -1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            return jump;
        }
        maxr = max(maxr, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i > maxr)
            {
                return -1;
            }
            step = maxr - i;
        }
    }
}

int main()
{
    int n, jump;
    cout << "Enter the no of elements of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    jump = minJump(arr, n);
    cout << "Minimum Jump required to reach the end of array is: " << jump << endl;
    return 0;
}
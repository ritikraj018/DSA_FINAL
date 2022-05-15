#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int N)
{
    int low = 0;
    int mid = low;
    int hi = N - 1;

    while (mid <= hi)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[hi--]);
            break;
        }
    }
}
int main()
{
    int n;
    cout << "Enter size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The given array is:" << endl;
    printArray(arr, n);
    sort012(arr, n);
    cout << "Sorted array: " << endl;
    printArray(arr, n);
    return 0;
}
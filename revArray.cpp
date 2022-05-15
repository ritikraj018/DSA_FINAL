#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter the no of elements of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The given array is: " << endl;
    printArray(arr, n);
    revArray(arr, 0, n - 1);
    cout << "\nReversed array is :" << endl;
    printArray(arr, n);
    return 0;
}

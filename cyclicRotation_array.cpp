// Write a program to cyclically rotate an array by one.
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void cyclicRotation(int arr[], int n)
{
    int last = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = last;
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
    cout << "After 1 clockwise cyclic rotation: " << endl;
    cyclicRotation(arr, n);
    printArray(arr, n);
    return 0;
}
// Find the "Kth" max and min element of an array
#include <bits/stdc++.h>
using namespace std;

// partition function
int partition(int arr[], int s, int e)
{

    int pivot = arr[s]; // intializing pivot
    int count = 0;

    // counting no of elements less than pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // place pivot at correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
// quicksort recursive function
void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // for left part
    quickSort(arr, s, p - 1);
    // for right part
    quickSort(arr, p + 1, e);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
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
    quickSort(arr, 0, n - 1);
    cout << "Sorted array is :" << endl;
    printArray(arr, n);
    cout << "Enter the value of k: " << endl;
    cin >> k;
    cout << "Kth smallest element is: " << arr[k - 1] << endl;
    cout << "Kth largest element is: " << arr[n - k] << endl;
    return 0;
}
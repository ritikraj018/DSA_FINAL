// Merge two sorted array in sorted form without using extra space
#include <bits/stdc++.h>
using namespace std;

// iterating both in opposite direction to each other
void merge(int arr1[], int arr2[], int n, int m)
{
    int j = 0, i = n - 1;
    while (arr1[i] > arr2[j] && i >= 0 && j < m)
    {
        swap(arr1[i--], arr2[j++]);
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

// using bubble sort technique
void merge(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            int k = 1, first = arr2[0];
            for (k = 1; k < m && arr2[k] < first; k++)
            {
                arr2[k - 1] = arr2[k];
            }
            arr2[k - 1] = first;
        }
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
    int m, n;
    cout << "Enter size of arr1 & arr2:" << endl;
    cin >> n >> m;
    int arr1[n], arr2[m];
    cout << "Enter elemetns of arr1:-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of arr2:-" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    merge(arr1, arr2, n, m);
    cout << "Merged array is:-";
    printArray(arr1, n);
    printArray(arr2, m);
    return 0;
}
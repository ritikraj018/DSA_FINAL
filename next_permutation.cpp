#include <iostream>
using namespace std;

void swapp(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverse(int arr[], int i, int j)
{
    while (i < j)
        swapp(arr, i++, j--);
}

void nextPermutation(int arr[], int n)
{
    if (n <= 1)
        return;
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1])
        i--;
    if (i >= 0)
    {
        int j = n - 1;
        while (arr[j] <= arr[i])
            j--;
        swapp(arr, i, j);
    }
    reverse(arr, i + 1, n - 1);
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    nextPermutation(arr, n);
    printArray(arr, n);
}
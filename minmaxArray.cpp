// Find the "Kth" max and min element of an array
#include <bits/stdc++.h>
using namespace std;

// declaring structure
struct Pair
{
    int min;
    int max;
};

// function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to find min max of an array
Pair minmaxofArray(int arr[], int n)
{
    struct Pair minmax;
    if (n == 0)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    if (arr[0] < arr[1])
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    else
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
        {
            minmax.max = arr[i];
        }
        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
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
    struct Pair minmax = minmaxofArray(arr, n);

    cout << "Max value element in array: " << minmax.max << endl;
    cout << "Min value element in array: " << minmax.min << endl;

    return 0;
}
// Move all the negative elements to one side of the array
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

void rearrange(int arr[], int N)
{
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
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
    rearrange(arr, n);
    cout << "Rearranged array :" << endl;
    printArray(arr, n);
    return 0;
}

// Union and intersection of two sorted array
#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int m, int arr2[], int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i++] << " ";
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j++] << " ";
        }
        else
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    while (i < m)
    {
        cout << arr1[i++] << " ";
    }
    while (j < n)
    {
        cout << arr2[j++] << " ";
    }
}

void printIntersection(int arr1[], int m, int arr2[], int n)
{
    int i = 0, j = 0;
    while (i < m && i < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter size of 1st array:" << endl;
    cin >> m;
    cout << "Enter size of 2nd array:" << endl;
    cin >> n;
    int arr1[m], arr2[n];
    cout << "Input the elements of 1st array:" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Input the elements of 1st array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    cout << "Union of the array is: " << endl;
    printUnion(arr1, m, arr2, n);
    cout << "\nIntersection of the array is: " << endl;
    printIntersection(arr1, m, arr2, n);
    return 0;
}
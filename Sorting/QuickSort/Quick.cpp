#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Original array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    quickSort(a, 0, n - 1);
    cout << "\n";
    cout << "Sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
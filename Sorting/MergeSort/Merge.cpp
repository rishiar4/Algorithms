#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L_arr[n1], R_arr[n2];
    for (i = 0; i < n1; i++)
    {
        L_arr[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R_arr[j] = arr[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L_arr[i] <= R_arr[j])
        {
            arr[k] = L_arr[i];
            i++;
        }
        else
        {
            arr[k] = R_arr[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L_arr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R_arr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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
    mergeSort(a, 0, n - 1);
    cout << "\n";
    cout << "Sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
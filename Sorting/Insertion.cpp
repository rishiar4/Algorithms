#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Original array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (int i = 1; i < n; i++)
    {
        int value = a[i];
        int hole = i - 1;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole = hole - 1;
        }
        a[hole] = value;
    }
    cout << "\n";
    cout << "Sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
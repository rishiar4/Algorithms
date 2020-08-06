#include <bits/stdc++.h>
using namespace std;
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
    cout << "\n";
    int pos;
    cout << "Enter position to delete element" << endl;
    cin >> pos;
    if (pos >= n + 1)
    {
        cout << "Deletion not possible" << endl;
    }
    else
    {
        for (int i = pos; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n = n - 1;
    }
    cout << "Updated array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
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
    for (int i = n - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    cout << "Updated array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
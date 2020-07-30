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
    for (int i = 0; i < n - 1; i++)
    {
        int iMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[iMin])
            {
                iMin = j;
            }
        }
        int temp = a[i];
        a[i] = a[iMin];
        a[iMin] = temp;
    }
    cout << "\n";
    cout << "Sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
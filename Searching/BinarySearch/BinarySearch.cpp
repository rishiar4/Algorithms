#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; //Size of array
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int k, index = -1; //Element to be found and position of element
    cout << "Enter array element to be found" << endl;
    cin >> k;
    int start = 0, end = n - 1; // Start and end of array
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == k)
        {
            index = mid;
            break;
        }
        else if (a[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    if (index == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at"
             << " " << index + 1 << " "
             << "position" << endl;
    }
}
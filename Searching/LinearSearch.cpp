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
    int k, index = -1; //Element to be found and position of element
    cout << "Enter array element to be found" << endl;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            index = i;
            break;
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
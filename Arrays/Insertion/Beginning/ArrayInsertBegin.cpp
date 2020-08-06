#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements" << endl;
    cin >> n;
    int a[n];
    cout << "Enter elements of array" << endl;
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
    int value;
    cout << "Enter value to be inserted" << endl;
    cin >> value;
    for (int i = n; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }
    a[0] = value;
    n = n + 1;
    cout << "Updated array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
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
    int value, index;
    cout << "Enter value to be inserted" << endl;
    cin >> value;
    cout << "Enter index where the element is to be inserted" << endl;
    cin >> index;
    for (int i = n; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = value;
    n++;
    cout << "Updated array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
void Insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    int n, i, x;
    cout << "Enter length of list" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter a number" << endl;
        cin >> x;
        Insert(x);
    }
    Print();
}
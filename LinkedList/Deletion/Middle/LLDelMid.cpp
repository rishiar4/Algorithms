#include <bits/stdc++.h>
using namespace std;
int n;
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
Node *deleteMid(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    int mid = n / 2;
    while (mid-- > 1)
    {
        head = head->next;
    }

    head->next = head->next->next;

    return temp;
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
    int i, x;
    cout << "Enter length of list" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter a number" << endl;
        cin >> x;
        Insert(x);
    }
    cout << "Original List is" << endl;
    Print();
    head = deleteMid(head);
    cout << "Modified List is" << endl;
    Print();
}
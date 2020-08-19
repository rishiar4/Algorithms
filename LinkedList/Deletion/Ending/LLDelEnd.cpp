#include <bits/stdc++.h>
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
Node *removeLastNode(struct Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    delete (temp->next);
    temp->next = NULL;

    return head;
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
    cout << "Original List is" << endl;
    Print();
    head = removeLastNode(head);
    cout << "Modified List is" << endl;
    Print();
}
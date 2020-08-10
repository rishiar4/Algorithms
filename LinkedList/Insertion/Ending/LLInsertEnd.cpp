#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void InsertEnd(int x)
{
    Node *ptr = new Node();
    Node *temp;
    if (ptr == NULL)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        ptr->data = x;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
        }
    }
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
    int n, i, x;
    cout << "Enter length of list" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter a value" << endl;
        cin >> x;
        InsertEnd(x);
    }
    Print();
}

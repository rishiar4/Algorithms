#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;
void InsertMid(int x, int pos)
{
    Node *temp1 = new Node();
    temp1->data = x;
    temp1->next = NULL;
    if (pos == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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
    InsertMid(2, 1);
    InsertMid(3, 2);
    InsertMid(4, 1);
    InsertMid(5, 2);
    Print();
}
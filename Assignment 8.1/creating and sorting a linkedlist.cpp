#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head1 = NULL;
node *head2 = NULL;
node *head3 = NULL;

void insert1(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = head1;
    head1 = temp;
}

void insert2(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = head2;
    head2 = temp;
}

void insert3(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = head3;
    head3 = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void merge()
{
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            insert3(temp1->data);
            temp1 = temp1->next;
        }
        else
        {
            insert3(temp2->data);
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL)
    {
        insert3(temp1->data);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        insert3(temp2->data);
        temp2 = temp2->next;
    }
}
void sort()
{
    node *temp = head3;
    while (temp != NULL)
    {
        node *temp2 = temp->next;
        while (temp2 != NULL)
        {
            if (temp->data > temp2->data)
            {
                int temp3 = temp->data;
                temp->data = temp2->data;
                temp2->data = temp3;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

int main()
{
    insert1(5);
    insert1(4);
    insert1(3);
    insert1(2);
    insert1(1);
    insert2(10);
    insert2(9);
    insert2(8);
    insert2(7);
    insert2(6);
    display(head1);
    display(head2);
    merge();
    sort();
    display(head3);
    return 0;
}

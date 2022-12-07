#include<iostream>
using namespace std;

static int length = 0;
class Node {
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node *head = NULL;

void insert_node(int position, int value) {
    // @params position, integer
    // @params value, integer
    Node *temp = new Node(value);

    if(position == 1)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        int cnt = 1;
        Node *curr = head;
        while(cnt < position-1)
        {
            curr = curr->next;
            cnt++;
        }
        temp -> next = curr->next;
        curr->next = temp;
    }
    length++;
}

void delete_node(int position) {
    // @params position, integer
    if(position > length)
    {
        return;
    }
    if(position == 1)
    {
        head = head->next;
    }
    else
    {
        int cnt = 1;

        Node *temp = head;
        while(cnt < position-1)
        {
            cnt++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }
    length--;
}


void print_ll() {
    // Output each element followed by a space
    if(length == 0)
    {
        return;
    }
    Node *temp = head;

    while(temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
}

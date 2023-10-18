// insert before a number in doubly linked list
//2212090
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class doubli
{
public:
    node *head;
    node *tail;
    doubli()
    {
        head = NULL;
        tail = NULL;
    }
    void traverse(int data)
    {
        node *new_node = new node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    void inserbeforenumber(int data, int num)
    {
        node *new_node = new node(data);
        node *temp = head;
        while (temp->data != num)
        {
            temp = temp->next;
        }
        temp = temp->prev;
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        temp = new_node;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "<->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
int main()
{

    doubli dl;
    dl.traverse(5);
    dl.traverse(4);
    dl.traverse(3);
    dl.traverse(2);
    dl.traverse(1);
    dl.display();
    dl.inserbeforenumber(6, 3);
    dl.display();

    return 0;
}

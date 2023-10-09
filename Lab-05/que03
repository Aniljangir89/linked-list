// Q . reverse a Linked list 
// Anil kumar (2212090)
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void traverse(node *&head, int data)
{
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << '\n';
}
int main()
{
    node *head = NULL;
    int index;
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    cout << "original linked list is-" << '\n';
    display(head);
    node *temp = head;
    node *next1;
    node *prev = NULL;
    while (temp != NULL)
    {

        next1 = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next1;
    }
    cout<<"reversed linked list:-"<<'\n';
    while (prev != NULL)
    {
        cout << prev->data << "->";
        prev = prev->next;
    }
    return 0;
}

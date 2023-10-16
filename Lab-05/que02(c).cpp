//Q . delete a number
//Anil kumar (2212090)
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
void deletenode(node *&head, int index)
{
    node *temp = head;
    int count = 1;
    while (count != index - 1)
    {
        temp = temp->next;
        count++;
    }
    node *sin;
    sin = temp->next;
    temp->next = temp->next->next;
    free(sin);
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
    index = 3;
    deletenode(head, index);
    cout << "final linked list is->" << '\n';
    display(head);
    return 0;
}

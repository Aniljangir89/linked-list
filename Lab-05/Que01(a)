
/*Q. insert at first in linked list*/
//anil kumar 2212090
#include <iostream>
#include <string.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int data)
    {
        val = data;
        next = NULL;
    }
};
void traverse(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "null" << '\n';
}
int main()
{

    node *head = NULL;
    int x;
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    cout<<"Normal linked list is:-'\n";
    display(head);
    
    cout << "enter the number you wants to insert:-";
    cin >> x;
    traverse(head, x);
    cout<<"final linked list is:-";
    display(head);
    return 0;
}

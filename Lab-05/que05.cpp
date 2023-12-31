// Q . print middle of linked list 
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
    traverse(head, 6);
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    cout << "original linked list is-" << '\n';
    display(head);
    node *temp=head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp = head;
    int sin = 1;
    if (count % 2 == 0)
    {
        while (sin != count/2)
        {
            temp = temp->next;
            sin++;
        }
        cout << temp->data <<" "<< temp->next->data;
    }
    else
    {
        while(sin!=(count+1)/2){
            temp=temp->next ;
            sin++;
        }
        cout<<temp->data;
    }
    return 0;
}

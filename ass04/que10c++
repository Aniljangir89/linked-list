//Q10:-sum of two node in linked list 
//Anil kumar(2212090)
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
void add(node* &head )
{
    node* temp= head ;
    int sum=(temp->val)+(temp->next->val);
    cout<<"sum of two node is:-"<<sum ;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << '\n';
}
int main()
{

    node *head = NULL;
    // traverse(head, 10);
    traverse(head, 9);
    traverse(head, 8);
   
    display(head);
    add(head);
   
    return 0;
}

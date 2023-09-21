//Q.04:- swap  pair of nodes 
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
 void swap_pair(node *&head)
{
    node *temp = head;
    // limit till last and second last node <-
    while (temp != NULL && temp->next != NULL) //
    {
        swap(temp->val, temp->next->val);
        temp = temp->next->next;//move by two step //
    }
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
    traverse(head, 7);
    traverse(head, 6);
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    display(head);
    swap_pair(head);
    display(head);
    return 0;
}

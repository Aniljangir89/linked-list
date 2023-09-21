//Q.03- find node from last
// solution by Anil jangir(2212090)

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
    node *travel = new node(val);
    travel->next = head;
    head = travel;
}
void appear(node *&head, int index)
{
    //first find total number of node 
    int cos = 0;
    node *travel = head;
    while (travel != NULL)
    {
        travel = travel->next;
        cos++;
    }
    //then travel again from head
    int sin = 0;
    travel = head;
    while (sin < cos - index)
    {
        travel = travel->next;
        sin++;
    }
    cout << travel->val;
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
    traverse(head, 78);
    traverse(head, 7);
    traverse(head, 6);
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    display(head);
    appear(head, 5);

    return 0;
}

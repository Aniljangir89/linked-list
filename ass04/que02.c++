//if in liked list position m and n is given then revrese the linked list from m to n
//solution by Anil jangir(2212090)

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
void displayreverse(node* head)
{
    node*temp=head ;
    while(temp!=NULL){
        cout<<temp->val<<"<-";
        temp=temp->next;

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
    cout << "null" << '\n';
}
int main()
{
    int m , n ;
    cout<<"Enter position from you wants to reverse:-"<<'\n';
    cin>>m ;
    cout<<"Enter position till you wants to reverse:-"<<'\n';
    cin>>n ;
    node *head = NULL;
    traverse(head, 8);
    traverse(head, 7);
    traverse(head, 6);
    traverse(head, 5);
    traverse(head, 4);
    traverse(head, 3);
    traverse(head, 2);
    traverse(head, 1);
    display(head);
    cout<<"The reverse linked list is as:-"<<endl ;
    int index = 0;
    node *cos = head;
    while (index != m - 1)
    {
        cos = cos->next;
        index++;
    }
    int count = index;
    node *sin = NULL;
    for (int i = count; i < n; i++)
    {
        node *gama = cos->next;
        cos->next = sin;
        sin = cos;
        cos = gama;
        count++;
    }
    node *new_node = sin;
    displayreverse(new_node);
   return 0;
}

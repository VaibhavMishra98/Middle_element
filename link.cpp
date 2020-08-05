#include <iostream>
using namespace std;

 struct node{
 int num;
 struct node *next;
 };

void create (struct node *head, int n)
{
    struct node *p;
    struct node *temp=new node();
    temp->num=n;
    p=head;
    while(p->next)
        p=p->next;
    p->next=temp;
    temp->next=NULL;
}
 void displayList(struct node *head)
{
    struct node *tmp;
    if(head == NULL)
    {
       cout<<" List is empty.";
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
            cout<<"   "<< tmp->num;
                        tmp = tmp->next;
        }
    }
}
int middle_element(struct node *head)
{
    int count=0;
    struct node *fast,*slow;
    fast=head;
    slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
        count++;
    }
    return count;

}


int main()
{
    struct node *head=NULL,*p;
    head=new node();
    head->num=1;
    create (head,2);
    create (head,3);
    create (head,4);
    create (head,5);
    create (head,6);
    create (head,7);
    create (head,8);

    displayList(head);
    int x=middle_element(head);

   p=head;
    while(x--)
    {
        p=p->next;
    }
    cout<<endl<<p->num;
    }

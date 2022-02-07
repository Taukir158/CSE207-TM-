#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
      int val;// data part
      Node *prv;
      Node *next;//address part

      Node(int data)
      {
          val = data;
          prv = NULL;
          next = NULL;
      }

};
Node *newnode,*head=NULL;
/*struct Node
{
    int val;
    Node *next;
};
*/
void display()
{
  cout<<"SLL Display"<<endl;
  Node *temp= head;
  while(temp!= NULL)
  {
      cout<< temp->val<<endl;
      temp=temp->next;
  }
void inseratbeg(int da)
{
    Node * newn= new Node(da);
    newn->next = head;
    head->prv = newn;
    head= newn;
}
void inseratanypos(int da)
{
    Node * newn= new Node(da);
    int pos =3;
    Node *temp= head, *temp1;

    for(int i=1;i<pos;i++)
    {

       temp1=temp;
       temp=temp->next;
    }
    temp1->next = newn;
    newn->prv = temp1;
    newn->next =temp;
    temp->prv = newn;

}
void deltanypos()
{

    int pos =2;
    Node *temp= head, *temp1;

    for(int i=1;i<pos;i++)
    {

       temp1=temp;
       temp=temp->next;
    }
    Node *t3= temp->next;
    temp1->next= t3;
    t3->prv = temp1;
    delete temp;

}

}
int main()
{
  int num=3;
  for(int i=0;i<num;i++)
  {
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    newnode = new Node(data);
    if(head==NULL)
      head=newnode;
    else{
      Node *temp= head,*temp1=temp;
      while(temp!= NULL)
      {
          temp1=temp;
          temp=temp->next;
      }
      temp1->next=newnode;
      newnode->prv =temp1;
    }
  }
    display();
    inseratbeg(10);

    return 0;
}



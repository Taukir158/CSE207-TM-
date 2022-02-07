#include<bits/stdc++.h>
using namespace std;

class Node
{
  public:
      int val;// data part
      Node *next;//address part

      Node(int data)
      {
          val = data;
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
    }
  }
    display();


    return 0;
}



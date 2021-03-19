#include <bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   struct node* next;    
    
    
};
node* head=NULL;
void insert(int new_data)
{
   node* new_node=new node();
   (*new_node).data=new_data;
   (*new_node).next=head;
   head=new_node;
}

void display()
{
   node* ptr;
   ptr=head;
   while(ptr!=NULL)
   {
       cout<<(*ptr).data<<endl;
       ptr=(*ptr).next;   
       
       
   }    
    
    
}
void del(int pos)
{
   node* temp=head;
   for(int i=2;i<pos;i++)
   {
      if((*temp).next!=NULL)
      {
         temp=(*temp).next;    
      } 
         
       
   } 
   (*temp).next=temp->next->next;   
    
    
}








int main()
{
   insert(4);
   insert(5);
   insert(1);
   insert(9);
   insert(7);
   display();
   cout<<endl;
   del(3);
   cout<<endl;
   
   display();
   return 0;
    
    
}
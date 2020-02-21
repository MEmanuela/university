#include <iostream>
using namespace std;

struct Node 
{ 
   int data; 
   Node *prev; 
   Node *next; 
}; 
Node* head = NULL; 
void insert(int newdata) 
{ 
   Node* newnode = new Node; 
   newnode->data  = newdata; 
   newnode->prev = NULL; 
   newnode->next = head;     
   if(head !=  NULL) 
      head->prev = newnode ;     
   head = newnode; 
}   
void display() 
{ 
   Node* ptr;
   ptr = head;  
   while(ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
  } 
  cout << endl;
} 
void insertAtAnyPosition(int x,int pos)  
{     
   Node* temp=NULL;  
   temp= new Node;  
   temp->data=x;  
   if(head==NULL)  
   {  
      temp->next=NULL;  
      head=temp;  
      temp->prev=head;   
   }  
   else  
   {  
      Node* temp2=head;  
      Node* temp3=NULL;  
      int i=0;  
      for(i=0;i<pos-1;i++)  
      {  
         temp2=temp2->next;  
         temp3=temp2->next;  
      }  
      temp->next=temp3;  
      temp3->prev=temp->next;  
      temp2->next=temp;  
      temp->prev=temp2;  
   }  
   cout << " After Insertion at any Position  " << endl;
   display();
      
}
void insertAtEnd(int x)  
{  
   Node* temp=NULL;  
   temp= new Node;  
   temp->data=x;  
   if(head==NULL)  
   {  
      temp->next=NULL;  
      head=temp;  
      temp->prev=head;  
      
   }  
   else  
   {  
      Node* temp2=head;  
      while(temp2->next!=NULL)  
      {  
         temp2=temp2->next;  
      }  
      temp2->next=temp;  
      temp->prev=temp2->next;  
      temp->next=NULL;  
   }  
}  
int main() 
{ 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: " <<endl;
   display(); 

   insertAtAnyPosition(23,3); 

   insertAtEnd(2);  
   insertAtEnd(3);  
   insertAtEnd(9);  
   insertAtEnd(8); 
   display(); 
   return 0; 
} 
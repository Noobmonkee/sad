#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
 int data;
 struct Node*next;
 next=NULL;
 }Node;
 
 Node* makell(int n)
 {
 if(n==0)
 printf("notvalid");
  Node n1;
  int d; scanf("%d",&d);n1.data=d;
  Node*head=n1;
  Node*temp=n1;
  
  for(int i=1;i<a;i++)
  {
   Node n2;
   int e; scanf("%d",&e);n2.data=e;
   temp->next=n2;
   temp=n2;
  
  }
  
 }
 
 void printll(Node*head)
{ 

 if(head->next ==NULL)
 printf("error");
 while(head->next != NULL)
 {
  printf("%d", head->data);
  head=head->next;
 }
}


 
int main(){
int a;
scanf("%d",&a);
Node*head=makell(a);
printll(head);






}


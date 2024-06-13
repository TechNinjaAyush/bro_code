#include<iostream>
using namespace std ;
class node {
public : 
  int val  ; 
  node * next ;
  node(int data){
    val = data ;
    next = nullptr ;
  }
};


void InsertAtHead(node *&head , int val) {
node  *new_node  = new node(val) ; 
new_node->next = head ;
head = new_node ;



}

void display(node * &head)
{
     node * temp = head ;
     while(temp!=nullptr){
      cout<<temp->val<<" " ;
      temp = temp->next ; 
     }
  cout<<"NULL"<<endl  ;
}
int main(){
 node * head = nullptr ;
InsertAtHead( head , 3) ;
display(head) ;
InsertAtHead( head , 5) ;
display(head) ;
InsertAtHead( head , 8) ;
display(head) ;
 
  return  0  ;
}
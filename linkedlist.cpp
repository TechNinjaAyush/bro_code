#include<iostream>
using namespace std ;
class node{
    public :
  int val ;
  node * next ;
  
  node(int data){
    val  = data ;
    next = nullptr ;
  }
} ;
  void insertathead(node *&head , int val){
    node *new_node = new node( val) ;
   new_node->next = head ;
   head  = new_node ;
  }
int main(){
node * head = nullptr ;
 insertathead(head  , 5) ;



    return 0 ;
}
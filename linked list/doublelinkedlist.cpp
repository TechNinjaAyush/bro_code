#include<iostream> 
using namespace std ; 
class Node{
  public :
  int val  ; 
  Node  * next ; 
  Node * prev ; 

  Node(int data ){
     val = data  ; 
     next = NULL ; 
      prev = NULL ; 
  }
} ; 

class DoublyLinkedList{
    public  : 
    Node * head ; 
    Node  * Tail ; 
     DoublyLinkedList(){
        head = NULL ; 
        Tail = NULL ; 
     }

     void Display(){
        Node * temp = head ; 
        while(temp!=NULL){
            cout<<temp->val<<" " ; 
            temp  =temp->next ; 
        }
        cout<<endl ; 
    
     }
     void InsertataStart(int val){

        Node * new_node = new  Node(val) ; 

        if(head==NULL){ 
            head= new_node ; 
            Tail = new_node ; 
            return  ; 
        }
        new_node->next = head ; 
        head->prev = new_node ; 
        head = new_node ; 
        return ; 


     }
     void Insertatlast(int val){
        Node * new_node = new Node(val) ;
        if(head==NULL){
            head  = new_node ; 
            Tail = new_node  ; 
            return ; 

        }
      Tail->next = new_node ; 
       new_node->prev = Tail ; 
        Tail = new_node ; 
         return ; 

     }

     void InsertATRandom(int val , int k ){
        Node * new_node = new Node(val)  ; 
         int curr_pos = 1; 
         Node * temp = head ; 
         while(curr_pos <  k - 1){
              temp = temp->next ; 
              curr_pos++ ;
         }
        Node * next_node = temp->next ; 
        new_node->next = next_node ; 
        next_node->prev = new_node ; 
        temp->next = new_node ; 
        new_node->prev = temp ; 
        temp = head ; 
     }

     void DeleteatStart(){
        if(head==NULL){
            return ; 
        }
         
        Node * temp = head ; 
        head = head->next ; 
        if(head==NULL){
            Tail = NULL ;
            return ; 
        }
        free(temp) ; 
        return ; 
     }

     void DeleteAtend(){

        if(head==NULL){
            return ; 
        }
        Node * temp = Tail ; 
        Tail = Tail->prev ; 
        Tail->next = NULL ; 
     if (Tail==NULL){
        head=NULL ; 
     }
       
        else {
        Tail->next = NULL ; 
        }
        free(temp) ; 
     }

     void Deleteatkthpos(int k){
        if(head==NULL){
            return ; 
        } 
         Node * temp = head ; 
         int cnt = 1 ; 
         while(cnt < k  && temp!=NULL){
                  temp = temp->next ; 
                  cnt++ ; 
         }
        Node *  prev_node = temp->prev ; 
        Node * next_node  = temp->next ; 
        prev_node->next = next_node ; 
        next_node->prev = prev_node ; 
        free(temp) ; 

       return ; 
        
     }
};  
int main(){
DoublyLinkedList dll ;  

dll.InsertataStart(4) ; 
dll.InsertataStart(9) ; 
dll.InsertataStart(7) ; 
dll.InsertataStart(5) ; 
// dll.Display() ; 
dll.Insertatlast(9) ; 
// dll.Display() ; 
dll.InsertATRandom(8 , 4) ; 
// dll.Display() ; 
dll.DeleteatStart() ; 
dll.Display() ; 
dll.DeleteAtend() ; 
dll.Display() ; 
dll.Deleteatkthpos(3) ; 
dll.Display() ; 
    return  0 ; 
}
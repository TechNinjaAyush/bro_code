#include<iostream> 
using namespace std ;

class node {
public:
    int val ;
    node *next ;

    node(int data) {
        val = data ;
        next = NULL ; 
    }
} ;

class LinkedList{
    public : 
    node * head ; 
        LinkedList(){
             head =NULL ;
        }
        void Insertatlast(int val) {
    // Create a new node with the given value
    node *new_node = new node(val);

    // If the linked list is empty, make the new node the head
    if (head == nullptr) {
        head = new_node;
        return;
    }

    // Traverse the linked list to find the last node
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Attach the new node to the last node's next pointer
    temp->next = new_node;
}
   
} ; 

void Insertathead(node *&head, int val) {
    node *new_node = new node(val) ;
    new_node->next = head ;
    head = new_node ;
}
void Insertatlast(node *&head, int val) {
    // Create a new node with the given value
    node *new_node = new node(val);

    // If the linked list is empty, make the new node the head
    if (head == nullptr) {
        head = new_node;
        return;
    }

    // Traverse the linked list to find the last node
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Attach the new node to the last node's next pointer
    temp->next = new_node;
}

void Insertatrandom(node *&head , int val , int position){
   node *new_node = new node(val) ;
  node *temp = head ;
  int curr_pos = 0 ;
  while(curr_pos!=position - 1) {
    temp = temp ->next ;
     curr_pos++ ;
  }
  //temp is at position - 1 
  new_node->next =temp->next ;
  temp->next = new_node ;


}
  void UpdateAtPosition(node *&head , int  k , int val){
    node *temp  = head  ;
     int curr_pos = 0 ;
     while(curr_pos!=k - 1){
                temp = temp->next ; 
                curr_pos++ ;
     }
     //temp will be pointing to k th node 
       temp->val = val ;
  }
  void DeletenodeatHead (node * &head ){
           //delte a starting node ;
           node *temp = head  ;
           head = head->next ;
           free(temp) ;

          
  }
  void DeleteAtEnd(node *&head ){
    node * temp = head ;
    while(temp->next->next!=nullptr){
        temp = temp->next ;

    }
    
    //now temp point to 2ns last node
  node * Tobedeleted = temp->next ;
  temp->next = nullptr;
  free(Tobedeleted);
  
    
  }
  void DeleteAtkthposition(node * &head , int pos){
      int curr_pos = 0 ; 
      node * temp  = head ; 
      while (curr_pos!=pos -  1)
      {
        temp = temp->next ; 
        curr_pos++ ;

     }
     node * node_deleted = temp->next ; 
     temp->next = temp->next->next ; 
     free(node_deleted) ;
      
  }


void Deleteatalternateposition(node *&head) {
     

    node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        node *to_be_deleted = temp->next;
        temp->next = temp->next->next;
         free(to_be_deleted) ; 
        temp = temp->next;
    }
}
void Deleteduplicte(node * &head){
    node *  temp = head ; 
    while( temp!=NULL &&  temp->next!=NULL){
        
        if(temp->val==temp->next->val){
            temp->next = temp->next->next ; 
            node * duplicate_node = temp->next ; 
              
            free(duplicate_node) ; 
            
        }
        else {
            temp  = temp->next ; 

        }
    }
}


void Reverselinkedlist(node * &head){
    node * temp  = head ; 
    
}

  
 void Display(node *head) {
    node *temp = head ;
    while(temp != NULL) {
        cout << temp->val << " " ;
        temp = temp->next ;
    }
    cout << "NULL"<<endl ;
}

int main() {
node *head = nullptr ;
Insertathead(head, 3) ;
 Display(head) ;
Insertathead(head, 2) ;
Display(head) ;
Insertathead(head, 2) ;
Display(head) ; 
Insertathead(head, 1) ;
Display(head) ;
Insertathead(head, 1) ;
Display(head) ;
Insertatlast(head , 4) ;
Display(head);
Deleteduplicte(head) ; 
Display(head) ; 
// Insertatrandom(head , 6 , 2) ;
// Display(head);
// UpdateAtPosition(head , 4 , 8); 
// Display(head) ;
// DeletenodeatHead(head ) ;  
// Display(head) ;
// DeleteAtEnd(head) ;
// Display(head);
// DeleteAtkthposition(head , 2); 
// Display(head) ; 
// Deleteatalternateposition(head) ; 
// Display(head) ;  
// Insertathead(head, 1)  ;
// Insertathead(head, 5)  ; 
// Insertathead(head, 7)  ; 
    return 0 ;
}
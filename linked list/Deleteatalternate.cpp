#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;

    node(int data) {
        val = data;
        next = nullptr;
    }
};

class LinkedList {
public:
    node* head;

    LinkedList() {
        head = nullptr;
    }

    void InsertAtTail(int val) {
        node* new_node = new node(val);
        if (head == NULL) {
            head = new_node;
            return;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    } 

    void display(){
        node * temp = head ; 
        while(temp!=NULL){
            cout<<temp->val<<" " ; 
            temp = temp->next ; 
        }
        cout<<"NULL" ; 
    }


} ;

void DeleteAlternateNode(node * &head) {
   node * temp = head  ; 
while(temp!=NULL  && temp->next!=NULL ){
    node *to_be_deleted = temp->next ; 
    temp->next = temp->next->next ; 
    free(to_be_deleted) ; 
    temp = temp->next ; 
}

}
void DeleteDuplicateNode(node *&head) {
    node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        node *to_be_deleted = temp->next;
        if (to_be_deleted->val == temp->val) {
            temp->next = to_be_deleted->next;
         free( to_be_deleted);  // Use delete instead of free
        } else {
            temp = temp->next;  // Only move temp if no deletion happened
        }
    }
}
void ReverseOrderPrint(node * head){
    // base condition 
    if(head==NULL){
        return  ; 
    }

    // recursive case 
    ReverseOrderPrint(head->next) ; 
    cout<<head->val<<" " ;


}
void ReverseOrderLinking(node * &head){
    node *prev = NULL;
    node *current = head;
    node *next = NULL;

    while (current != NULL) {
        // Store next node
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next; 
    }
    // Update head to new first node
    head = prev;
}


void RotateByk(node * &head , int k ){
   if (!head || k == 0) return; // If the list is empty or no rotation is needed

    node* temp = head;
    int cnt = 1; // Start counting from 1 since we are already at the head

    // Find the length of the list
    while (temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }

    // Make the list circular
    temp->next = head;

    // Adjust k to ensure it's within the bounds of the list length
    k = k % cnt;
    if (k == 0) {
        temp->next = NULL; // Break the circle if k is 0 after adjustment
        return;
    }

    // Find the new end of the list
    int stepsToNewHead = cnt - k;
    temp = head;
    for (int i = 0; i < stepsToNewHead - 1; i++) {
        temp = temp->next;
    }

    // Set the new head and break the loop
    head = temp->next;
    temp->next = NULL;
 return ; 

}
  





}
int main(){
LinkedList ll ; 
ll.InsertAtTail(1); 
ll.InsertAtTail(2) ; 
ll.InsertAtTail(2) ; 
ll.InsertAtTail(4) ; 
ll.display() ; 
DeleteDuplicateNode(ll.head) ; 
DeleteAlternateNode(ll.head) ; 
ll.display() ;
ReverseOrderPrint(ll.head)  ; 
RotateByk(ll.head) ; 
ll.display() ; 

}
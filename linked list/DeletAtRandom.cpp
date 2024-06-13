#include <iostream>
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
        if (head == nullptr) {
            head = new_node;
            return;
        }
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

void Deleteatalternateposition(node *&head) {
     

    node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        node *to_be_deleted = temp->next;
        temp->next = temp->next->next;
         free(to_be_deleted) ; 
        temp = temp->next;
    }
}

int main() {
    LinkedList ll;
    ll.InsertAtTail(9);
    ll.InsertAtTail(15);
    ll.InsertAtTail(20);
    ll.InsertAtTail(28);
    ll.InsertAtTail(30);
    ll.display(); 
    Deleteatalternateposition(ll.head) ;
  ll.display(); 


    return 0;
}

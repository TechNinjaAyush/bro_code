#include<iostream> 
using namespace std;

class node {
public:
    int val;
    node *next;

    node(int data) {
        val = data;
        next = NULL; 
    }
};

void Insertathead(node *&head, int val) {
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void Insertatlast(node *&head, int val) {
    //creating a node  
    node *new_node = new node(val);
    if (head == NULL) {
        head = new_node;
        return;
    }
    node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void InsertAtRandom(node *&head, int val, int k) {
    if (k == 0) {
        Insertathead(head, val);
        return;
    }
    node *temp = head;
    int curr_pos = 0; 
    while (temp != NULL && curr_pos != k - 1) {
        temp = temp->next;
        curr_pos++;
    }
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
    node *new_node = new node(val);
    new_node->next = temp->next; 
    temp->next = new_node;
}

void UpdateAtRandom(node *&head, int val, int k) {
    if (k == 0) {
        head->val = val;
        return;
    }
    int curr_pos = 0;
    node *temp = head; 
    while (temp != NULL && curr_pos != k) {
        temp = temp->next;
        curr_pos++;
    }
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
    temp->val = val;    
}

void DeleteAtHead(node *&head) {
    if (head == NULL) return;
    node *temp = head; 
    head = head->next; 
    delete temp;  
}

void DeleteAtTail(node *&head) {
    if (head == NULL) return;
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    node *second_last = head; 
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    } 
    node *temp = second_last->next; 
    second_last->next = NULL; 
    delete temp; 
}

void Display(node *&head) {
    node *temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node *head = nullptr;
    Insertathead(head, 2);
    Display(head);
    Insertathead(head, 1);
    Display(head);
    Insertathead(head, 3);
    Display(head);
    Insertatlast(head, 4);
    Display(head);
    Insertatlast(head, 9);
    Display(head);
    InsertAtRandom(head, 7, 2);
    Display(head);
    UpdateAtRandom(head, 8, 2);
    Display(head);
    DeleteAtHead(head);
    // Display(head);  
    // DeleteAtTail(head);
    // Display(head);  
    return 0;
}

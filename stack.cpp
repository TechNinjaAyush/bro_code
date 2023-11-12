/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

class Stack {
public:
    int arr[5];
    int idx = -1;
    int capacity ; 

   
    Stack(int c ){
    this->capacity = c ;
   
    }
    void Is_Empty() {
        if (idx == -1) {
            cout << "STACK IS EMPTY\n";
        }
    }

    void Is_Full(){
        if( idx == capacity -1){
            cout << " stack is overflow \n" ;
        }
    }

    void push(int num) {
        // Increment the index and assign the value to the Stack
        
        idx ++ ;
        arr[idx] = num;
        
    }

    void display() {
        // Display the elements of the Stack
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;  // Add a newline for better formatting
    }

   
    
    void Top_Element(){
        cout << "TOP ELEMENT IS :\n" ;
        cout << arr[idx] << "\n" ; 
    }
};


int main() {
    int capacity = 5 ;
    Stack obj1(capacity) ;
   

    obj1.Is_Empty();

    int num;

    // Input values and push them onto the stack
    for (int i = 0; i < 5; i++) {
        cin >> num;
        obj1.push(num);
    }
     obj1.Is_Full() ;
    // Display the stack
    cout << "DISPLAY THE ELEMENTS :\n";
obj1.display();

obj1.Top_Element();

    return 0;
}

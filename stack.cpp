#include<iostream>
using namespace std;

class Stack {
public:
    int arr[5];
    int idx = -1;
    int capacity;

    Stack(int c) {
        this->capacity = c;
    }

    void Is_Empty() {
        if (idx == -1) {
            cout << "STACK IS EMPTY\n";
        } else {
            cout << "STACK IS NOT EMPTY\n";
        }
    }

    void Is_Full() {
        if (idx == capacity - 1) {
            cout << "STACK IS FULL\n";
        } else {
            cout << "STACK IS NOT FULL\n";
        }
    }

    void push(int num) {
        // Increment the index and assign the value to the Stack
        if (idx == capacity - 1) {
            cout << "STACK IS FULL. CANNOT PUSH MORE ELEMENTS.\n";
        } else {
            idx++;
            arr[idx] = num;
            cout << "PUSHED ELEMENT: " << num << endl;
        }
    }

    void pop() {
        if (idx == -1) {
            cout << "UNDERFLOW (STACK IS EMPTY)\n";
        } else {
            cout << "POPPED ELEMENT: " << arr[idx] << endl;
            idx--;
        }
    }

    void display() {
        // Display the elements of the Stack
        if (idx == -1) {
            cout << "STACK IS EMPTY\n";
        } else {
            cout << "STACK ELEMENTS: ";
            for (int i = 0; i <= idx; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void Top_Element() {
        if (idx != -1) {
            cout << "TOP ELEMENT IS: " << arr[idx] << "\n";
        } else {
            cout << "STACK IS EMPTY. NO TOP ELEMENT.\n";
        }
    }
};

int main() {
    int capacity = 5;
    Stack obj1(capacity);
    int ch; // CHOICE

    cout << "ENTER THE CHOICE (1-6) or 7 to exit\n";
    cin >> ch;

    while (ch <= 6) {
        switch (ch) {
            case 1:
                obj1.Is_Empty();
                break;
            case 2:
                obj1.Is_Full();
                break;
            case 3:
                int num;
                cout << "Enter the element to push onto the stack: ";
                cin >> num;
                obj1.push(num);
                break;
            case 4:
                obj1.Top_Element();
                break;
            case 5:
                obj1.display();
                break;
            case 6:
                obj1.pop();
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

        cout << "ENTER THE NEXT CHOICE (1-6) or 7 to exit\n";
        cin >> ch;
    }

    return 0;
}

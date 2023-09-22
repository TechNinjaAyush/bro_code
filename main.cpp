#include <iostream>

using namespace std;

class Queue
{
  int arr[10];
  int front = -1;
  int rear = -1;

public:
  void enqueue(int num)
  {
    if ((front == 0 && rear == 9) || ((rear + 1) % 10 == front))
    {
      cout << "QUEUE IS FULL \n";
    }
    else if (front == -1)
    {
      front = rear = 0;
      
      arr[rear] = num;
      
    }
    else
    {
      rear = (rear + 1) % 10;
      arr[rear] = num;
    }

    // Print the elements in the queue
    for (int i = front; i <= rear; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main()
{
  Queue p1;
  int ch;
  cout << "ENTER 1 FOR ENQUEUE: ";
  cin >> ch;
  int num;

  switch (ch)
  {
  case 1:
    cout << "Enter a number to enqueue: ";
    cin >> num;
    p1.enqueue(num);
    break;
  }

  return 0;
}

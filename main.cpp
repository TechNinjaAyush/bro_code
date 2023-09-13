/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
struct students{
    int roll_no;
    string name;
   int sgpa;
};
 class seit{
     struct students p[2];
     public:
     void enterdata(){
     for(int i=0;i<2;i++){
      cout<<"enter roll number \n ";
    cin>>p[i].roll_no;
    cout<<"enter sgpa of students \n";
    cin>>p[i].sgpa;
    cout<<"enter name of students \n";
    cin>>p[i].name;
    
  }
     }
     public:
     void bubble_sort(){
    cout<<"sorting roll number of students in ascending order \n";
    for(int i=0;i<2;i++){
        if(p[i].roll_no>p[i+1].roll_no){
            swap(p[i],p[i+1]);
        }
    }
    cout<<"DISPLAY ROLL NUMBER OF STUDENTS IN INCREASING ORDER \n";
    for(int i=0;i<2;i++){
        cout<<"roll numbers of students in increasing order"<<p[i].roll_no<<" ,";
    }
}
public :
void display(){
cout<<"NAME\t\tRoll number\t\tsgpa";
for(int i=0;i<2;i++){
cout<<p[i].name<<"\t\t"<<p[i].roll_no<<"\t\t"<<p[i].sgpa;
}
}
public:
void quicksort(){
int start=1;
int j=p[start].roll_no;
int i=p[start-1].roll_no;

int end=4;
int pivot=p[end].roll_no;
for(int =0;i<5;i++){
if(j<=pivot){
start++;
swap(i,j);
}
}
public :
void sequentialsearch(){
  cout<<"enter the sgpa to be searched \n";
  int key;
  cin>>key;
  int flag;
  for(int i=0;i<2;i++){
    flag=0;
    if(key==p[i].sgpa){
   flag++;
    }
    if(flag==1){
        cout<<"NAME OF STUDENT"<<p[i].name<<"ROLL NUMBER"<<p[i].roll_no<<"sgpa"<<p[i].sgpa;
    }
  }
}
public:
void insertionsort(){
int i,j;
string key;

for(int i=1;i<5;i++){
    key=p[i].name;
    j=i-1;
    
    while(j>=0){
        
    if(key.compare(p[j].name)<0){
        p[j+1].roll_no=p[j].roll_no;
        p[j+1].sgpa=p[j+1].sgpa;
        p[j+1].name=p[j+1].name;
    }
    else{
        break;
    }
    j--;
    }
    p[j+1].name=key;
}
cout<<"NAMES OF STUDENTS IN ALPHABETICAL ORDER";
for(int i=0;i<2;i++){
    cout<<p[i].name<<" ";
}
}

 };
int main(){
  students p[2];
  seit obj1;
 
 obj1.enterdata();
   int choice;
  cout<<("enter the choice \n");
  cin>>choice;
  ("enter 1 for bubble sort \n");
   ("enter 2 for sequential search \n");

  switch(choice){
  case 1:
   obj1.bubble_sort();
   break;
   case 2:
    obj1.sequentialsearch();
    break;
    case 3:
    obj1.insertionsort();
    break;
        
   }
      return 0;}


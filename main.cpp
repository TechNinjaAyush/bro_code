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
cout<<p[i].name<<p[i].roll_number<<p[i].sgpa;
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
public :
void insertionsort(){
int i,int j,int key;
for(int i=1,i<n;i++){

}
 };


int main(){
  students p[2];
  seit obj1;
 
 obj1.enterdata(p);
   int choice;
  cout<<"enter the choice \n";
  cin>>choice;
  ("enter 1 for bubble sort/n");
   ("enter 2 for sequential search/n");

  switch(choice){
  case 1:
   obj1.bubble_sort(p);
   case 2:
    obj1.sequentialsearch(p);
    case 
        
   }
      return 0;}

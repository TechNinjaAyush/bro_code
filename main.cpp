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
     struct students p[15];
     public:
     void bubble_sort(students p[15]){
    cout<<"sorting roll number of students in ascending order";
    for(int i=0;i<15;i++){
        if(p[i].roll_no>p[i+1].roll_no){
            swap(p[i].roll_no,p[i+1].roll_no);
        }
    }
    cout<<"DISPLAY ROLL NUMBER OF STUDENTS IN INCREASING ORDER";
    for(int i=0;i<15;i++){
        cout<<"roll numbers of students in increasing order"<<p[i].roll_no<<" ,";
    }
}
void sequentialsearch(students p[15]){
  cout<<"enter the sgpa to be searched";
  int key;
  cin>>key;
  int flag;
  for(int i=0;i<15;i++){
    flag=0;
    if(key==p[i].sgpa){
   flag++;
    }
    if(flag==1){
        cout<<"NAME OF STUDENT"<<p[i].name<<"ROLL NUMBER"<<p[i].roll_no<<"sgpa"<<p[i].sgpa;
    }
  }
}

 }


int main(){
  students p[15];
  seit obj1;
  cout<<"ENTER ROLL NO,sgpa,name OF 15 STUDENTS";
  for(int i=0;i<15;i++){
      cout<<"enter roll number ";
    cin>>p[i].roll_no;
    cout<<"enter sgpa of students";
    cin>>p[i].sgpa;
    cout<<"enter name of students";
    cin>>p[i].name;
    
  }
   obj1.bubble_sort(p);
    obj1.sequentialsearch(p);
    return 0;
   }
    

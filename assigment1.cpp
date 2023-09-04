#include<bits/stdc++.h>
using namespace std;
struct students{
    int roll_no;
    string name;
   int sgpa;
};

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

int main(){
  students p[15];
  cout<<"ENTER ROLL NO,NAME,MARKS OF 15 STUDENTS";
  for(int i=0;i<15;i++){
    cin>>p[i].roll_no;
    cin>>p[i].sgpa;
    cin>>p[i].name;
    
  }
   bubble_sort(p);
    sequentialsearch(p);
    return 0;
   }
    

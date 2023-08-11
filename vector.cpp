/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<int>v;
    cout<<v.size()<<endl;
    
v.push_back(1);
v.push_back(4);
v.push_back(7);
 v.push_back(8);
 v.push_back(9);
 cout<<v.size()<<endl;
 v.insert(v.begin()+2,7);
cout<<v.size()<<endl;
v.pop_back();
cout<<v.size();

    return 0;
}
    
  
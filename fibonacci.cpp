/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
int main(){
int num;
cin>>num;

vector <int>v;
while(num!=0){
    int rem=num%10;
    v.push_back(rem);
    num=num/10;
}
 vector<int>v1=v;
 reverse(v1.begin(),v1.end());
 bool ispalindrome=true;
 for(int i=0;i<5;i++){
     if(v1[i]!=v[i]){
         ispalindrome=false;
         break;
     }
 }
 if(ispalindrome){
     cout<<"yes";
 }
 else{
     cout<<"no";
 }
 return 0;
}
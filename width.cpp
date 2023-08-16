/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,h;
   cin>>n>>h;
   int arr[n];
   int add=0;
  for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=h){
          add+=1;
      }
      else{
          add+=2;
      }
  }
 cout<<add; 
    return 0;
}
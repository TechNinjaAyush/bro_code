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
   int arr[n];  //array which is used to store elements
   int sum=0;
  for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<=h){
          sum+=1;
      }
      else{
          sum+=2;
      }
  }
 cout<<sum; 
    return 0;
    
}
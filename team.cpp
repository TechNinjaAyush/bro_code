/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int count=0;
while(n!=0){
  
   vector<int>v(3);
   
  for(int i=0;i<3;i++){
      cin>>v[i];
      
  }
   vector<int>f(2,0);
   for(int i=0;i<3;i++){
         if(v[i]==1){
             f[v[i]]++;
         }
   }
   for(int i=0;i<2;i++){
       if(f[i]>=2){
           count++;
       }
   }
    n--;
}
  cout<<count;
    return 0;
}

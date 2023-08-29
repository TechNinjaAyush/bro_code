/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   long long count=0;
  for(int i=0;i<n;i++){
      while(arr[i+1]<arr[i]){
          arr[i+1]=arr[i+1]+1;
          count++;
      }
  }
  cout<<count;
    return 0;
}

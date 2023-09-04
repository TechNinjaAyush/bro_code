/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long sum1=n*(n+1)/2;
   
    long long sum2=0;
    long long arr[n-1];
   for(int i=0;i<n-1;i++){
       cin>>arr[i];
       sum2+=arr[i];
   }
  cout<<sum1-sum2<<"\n";
    return 0;
}
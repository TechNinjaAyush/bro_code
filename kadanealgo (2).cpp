/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


 
using namespace std;
void  maxsum(vector<long long>v,int n){
  long long max2=INT_MIN;
  long long sum=0;
    for(int i=0;i<n;i++){
     sum+=v[i];
     if(sum<0){
         sum=0;
     }
    else if(sum>max2){
        max2=sum;
    }
}
if(sum==0){
cout<<*max_element(v.begin(),v.end());
}
else{
    cout<<max2;
}
}
int main()
{
    int n;
    cin>>n;
vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
         }
 maxsum(v,n);
 
    return 0;
}
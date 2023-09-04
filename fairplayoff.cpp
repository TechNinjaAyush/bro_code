/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   long long t;
   cin>>t;
   while(t!=0){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       int max1=max(a,b);
       int max2=max(c,d);
       int min1=min(a,b);
       int min2=min(c,d);
       if(max1<min2 || max2<min1){
           cout<<"NO\n";
       }
       else{
           cout<<"YES\n";
       }
       t--;
   }
   return 0;
}
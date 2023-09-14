/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
 bool check(string s,string t){
        sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         if(s.compare(t)==0){
             return true;
         }
         return false;
 }


int main()
{
 string s,t;
 cin>>s>>t;
 if(check(s,t)){
     cout<<"yes its is an anagaram";
 }
 else{
     cout<<"not an anagram";
 }

    return 0;
}

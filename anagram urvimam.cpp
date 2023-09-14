/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
 bool check(string s,string t){
       if(s.length()!=t.length()){
           return false;
       }
       vector<int>f(26,0);
       for(int i=0;i<s.length();i++){
           f[s[i]-'a']++;
          
       }
       for(int i=0;i<s.length();i++){
           f[t[i]-'a']--;
       }
       for(int i=0;i<26;i++){
           if(f[i]!=0){
               return false;
           }
       }
    return true;     
 }


int main()
{
 string s,t;
 cin>>s>>t;
 if(check(s,t)){
     cout<<"yes it is an anagaram";
 }
 else{
     cout<<"not an anagram";
 }

    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
 string s;
getline(cin,s);
 for(int i=0;i<s.size();i++){
     if((s[i]>=97 && s[i]<=122)){
        s[i]-=32;
 }
 else if(s[i]==','){
     s[i]=' ';
 }
 else {
     s[i]+=32;
 }
 }
 cout<<s;
    return 0;
}

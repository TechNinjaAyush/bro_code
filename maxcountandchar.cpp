/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
 string s="aaaaayuytugsd";
 vector<int>v(26,0);
 for(int i=0;i<s.size();i++){
     v[s[i]-'a']++;
 }
int max=0;
char ch='a';
for(int i=0;i<26;i++){
    if(v[i]>max){
        max=v[i];
        ch='a'+i;
    }
}
cout<<max<<" "<<ch;
    return 0;
}
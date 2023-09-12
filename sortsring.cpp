#include<bits/stdc++.h>
using namespace std;
int main(){
string a="ayetiusyyush";
vector<int>f(26,0);
for(int i=0;i<a.length();i++){
    int index=a[i]-'a';
    f[index]++;
}
int j=0;
for(int i=0;i<26;i++){
    while(f[i]--){
        a[j]=i+'a';
        j++;
    }
}
    return 0;
}
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
//frequency count;
int main(){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){  //declare vector of size n
    cin>>v[i];
}
const int N=1e5+10;
vector<int>fre(N,0);
for(int i=0;i<n;i++){
    fre[v[i]]++;
}
int number;
cin>>number;
cout<<fre[number];
    return 0;
}

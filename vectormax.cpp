/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int size=5;
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end()); ssvskhhigiwg
    int max=*max_element(v.begin(),v.end());
    int min=*min_element(v.begin(),v.end());
    cout<<"maximum element after sorting is"<<max;
     cout<<"minimum element after sorting is"<<min;
    return 0;
}
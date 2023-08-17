/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[4]={4,5,6,7};
vector<int>v(4);
int sum=0;
for(int i=0;i<4;i++){
    sum=sum+arr[i];
    v.push_back(sum);
    cout<<sum<<"\n";
}


    return 0;
}

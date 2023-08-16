/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
         v.push_back(element);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}

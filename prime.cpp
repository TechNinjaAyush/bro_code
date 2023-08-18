/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool isprime=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
if(isprime){
    cout<<"yes it is prime number";
}
else{
    cout<<"no its not a prime number";
}

    return 0;
}

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
scanf("%d",&n);
while(n!=0){
int v1[3];  
int v2[3];
int v3[3];
int sum=0;
int sum1=0;
int sum2=0;
for(int i=0;i<3;i++){
cin>>v1[i];
sum+=v1[i];
 }
n--;
for(int i=0;i<3;i++){
cin>>v2[i];
sum1+=v2[i];
  }
n--;
for(int i=0;i<3;i++){
cin>>v3[i];
sum2+=v3[i];
}
n--;
}

if(sum+sum1+sum2==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    return 0;
}

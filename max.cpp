/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
 int arr[5]={1,2,3,7,4};
   int  max=0;
 for(int i=0;i<5;i++){
     if(arr[i]>max){
         max=arr[i];
     }
    
}
 cout<<max<<endl;
    return 0;
}

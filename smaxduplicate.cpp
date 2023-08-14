/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<climits>
using namespace std;
///for finding the number of pairs whose sum is equal to target sum


int largestelementindex(int arr[],int size){
    int max=INT_MIN;
    int smaz=INT_MIN;
    int ind=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            ind=i;
        }
    }
    return max;
}
int main()
{
 int arr[]={3,4,7,6,7};
 
 int x=largestelementindex(arr,5); 
 for(int i=0;i<5;i++){
     if(arr[i]==x){
         arr[i]=-2;
     }
 }
 int y=largestelementindex(arr,5);
 cout<<y;
    return 0;
}

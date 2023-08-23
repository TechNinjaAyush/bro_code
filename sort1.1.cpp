/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void sort1and0(int arr[8]){
    int count=0; //for counting number of zeroes
    for(int i=0;i<8;i++){   
        if(arr[i]==0){  
            count++;   
        }
    }
    for(int i=0;i<count;i++){
        arr[i]=0;
    }
     for(int i=count;i<8;i++){
        arr[i]=1;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[8]={1,1,0,0,1,0,1,0};
    sort1and0(arr);
    
  return 0;  
}

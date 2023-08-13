/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<climits>
using namespace std;
int largetelementindex(int array[],int size){
    int max=INT_MIN; int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}


int main()
{
    int array[]={2,3,7,8,9,4};
    int largesteleindex= largetelementindex(array,6);
    array[largesteleindex]=-2;
    int seclargesteleindex= largetelementindex(array,6);
    cout<<array[seclargesteleindex]<<endl;
    
     return 0;
}

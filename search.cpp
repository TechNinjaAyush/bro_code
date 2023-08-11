#include<iostream>
using namespace std;
int main(){
int number=1;    //we have to find wheather 1 is repeting in arrays or not;
                  //in key we stored -1 so if number 1 is find in an array then updation of ket occurs;
                      //using break we end loop som that we dont need to check in all elements of array
int key=-1;
int arr[5]={4,3,1,2,7};
for(int i=0;i<5;i++){
    if(arr[i]==number){
       key=i;
       break;
            }
    
}
cout<<key<<endl;
}

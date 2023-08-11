#include<iostream>
using namespace std;
int main(){
int number=1;
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
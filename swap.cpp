#include <iostream>
using namespace std;
int main(){

    int num1,num2;
    int temp;
    cin>>num1>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"value of a after swap is"<<num1<<endl;
     cout<<"value of b after swap is"<<num2<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main(){

    int num1,num2;
    int a;
    cin>>num1>>num2;
    a=num1;
    num1=num2;
    num2=a;
    cout<<"value of a after swap is"<<num1<<endl;
     cout<<"value of b after swap is"<<num2<<endl;
    return 0;
}

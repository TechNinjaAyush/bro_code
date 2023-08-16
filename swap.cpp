#include <iostream>
using namespace std;
int main(){

    int num1,num2;
    int c;
    cin>>num1>>num2;
    c=num1;
    num1=num2;
    num2=c;
    cout<<"value of a after swap is"<<num1<<endl;
     cout<<"value of b after swap is"<<num2<<endl;
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct students{
    int roll_no;
    string name;
    int marks;
};
int main()
{
    students p[15];
    
    
    for(int i=0;i<15;i++){
        cin>>p[i].name;
        cin>>p[i].roll_no;
        cin>>p[i].marks;
    }

    return 0;
}

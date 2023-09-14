#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    long long N;
    cin>>N;
    int sum=0;
   int arr[3]={1,1,0};
   for(int i=0;i<3;i++){
       sum+=arr[i];
   }
   int res=N-sum;
    arr[2]=res;
   for(int i=0;i<3;i++){
       cout<<arr[i]<<" "<<endl;
   }
}
	return 0;
}
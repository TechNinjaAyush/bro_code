class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
       sort (arr.begin() , arr.end());
        return arr[0] ;
    } 
};


//{ Driver Code Starts.
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.chocolates(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
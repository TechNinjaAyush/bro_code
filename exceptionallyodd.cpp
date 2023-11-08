//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        
    int mpp[100001] = {0};
    for(int i = 0 ;i<n ;i++){
        mpp[arr[i]]++;
    }
    int num = -1 ;
    for(int i = 0 ; i<100001 ;i++){
        if(mpp[i]%2!=0){
            num = i ;
        }
    }
    return num ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends
//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    {  
        vector<int>v ;
        for(int i = 0 ; i<n ;i++){
            v.push_back(arr[i]) ;
        }
        
        int diff = abs(v[0] - target) ;
        int num = v[0] ;
        for(int i = 1 ; i<=v.size()-1;i++){
            if(abs(v[i]-target)<=diff){
                diff = abs(v[i]-target) ;
                num = v[i] ;
            }
        }
        return num ;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends
#include<bits/stdc++.h>
using namespace std ;
int main(){
int arr[6] = {3,4,6,5,6,4} ;
set<int >s ; // used to store the unique elements in nsorted order
for (int i = 0 ; i < 6 ;i++){
    s.insert(arr[i])  ; // log n complexity
    }
cout << s.size()<< "\n" ; //  gives the output 4 
s.erase(s.begin()) ; // deletes the 1 st element
// s.erase(s.begin() , s.begin() + 2) ;
s.erase(4) ; //erase the element 4 
set<int>s1(s) ;
set<int > s2 = {4,6,7,8} ; // log(n)
 auto it = s2.find(6) ; //point towards the iterator to 4 if find otherwise points to s.end()
cout << distance(s2.begin() , it) ;
 //unoedered set
 unordered_set<int >s4 ;
 //not in sorted order
 s4.insert(5);
 s4.insert(56);// s4.emplace(56)
 // O(1)  AVG.TIME COMPLEXITY
 // WORST IS O(n);
 // used when there is no requirement of elements i  sorted order
//  for duplicates elements we use multiset
multiset<int > op ;
op.insert(1);
op.insert(1);
op.insert(6);
// {1,1,6};
op.clear() ; // deletes the whole set
op.erase(op.find(1)); // deletes the 1st instance of 1
map<string  , int> mpp ;
 
 mpp["ayush"] = 12 ;
 mpp["soham"] = 14 ;
 mpp[ "faosfh"] = 24 ;
  //printing th map 
  for(auto it : mpp){
    cout << it.first <<" " << it.second ;
  }
unordered_map< string , int>mpp1 ;
mpp["fsgssg"] = 13 ;
mpp["hedh"] = 788 ;
// stored in unorderes sequence
multimap<string , int > op2 ;
//bascially normal maps stored unique values but in multimap we can store multivalues

return  0 ;
}
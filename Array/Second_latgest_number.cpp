#include<bits/stdc++.h>

using namespace std;


// int solve(vector<int>arr,int n,int ans){
//     int largest=INT_MIN;
//     for(int i=0;i<n;i++){
//         largest=max(largest,arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]==largest)continue;
//         else
//         ans=max(ans,arr[i]);
        
//     }
//     return ans;

// }

// int  main(){
//     int n;
//     cin>>n;
     
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }


//     int ans=0;
//     ans= solve(arr,n,ans);

//  cout<<ans<<endl;
  
// }
// Time coplexity =O(n);
// Space compleity O(1);

int solve(vector<int>arr,int n){
    set<int>st(arr.begin(),arr.end());
    arr.clear();
    
    vector<int>arr2(st.begin(),st.end());


 priority_queue<int>pq(arr2.begin(),arr2.end());

 int temp=pq.top();
 pq.pop();
 if(pq.size()==0)return -1;
 return pq.top();








}


int main(){
    int  n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
     int ans=0;
     ans=solve(arr,n);

     cout<<ans;

        

}
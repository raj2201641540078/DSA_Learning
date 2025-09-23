#include<bits/stdc++.h>
using namespace std;

void solve(int index,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int n,int k){
    if(index==n){
        if(temp.size()==k)
        ans.push_back(temp);
        return;
    }
    solve(index+1,arr,temp,ans,n,k);
    temp.push_back(arr[index]);
    solve(index+1,arr,temp,ans,n,k);
    temp.pop_back();
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr;
for (int i = 1; i <= n; i++) {   // numbers 1..n
    arr.push_back(i);
}


    vector<int>temp;
    vector<vector<int>>ans;
    solve(0,arr,temp,ans,n,k);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


}








































// class Solution {
// public:

// void solve(int index,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int n,int k){
//     if(index==n){
//         if(temp.size()==k)
//         ans.push_back(temp);
//         return;
//     }
//     solve(index+1,arr,temp,ans,n,k);
//     temp.push_back(arr[index]);
//     solve(index+1,arr,temp,ans,n,k);
//     temp.pop_back();
// }

//     vector<vector<int>> combine(int n, int k) {
//      vector<int> arr;
// for (int i = 1; i <= n; i++) {
//     arr.push_back(i);
// }

//       vector<int>temp;
//       vector<vector<int>>ans;
//       solve(0,arr,temp,ans,n,k);
//       return ans;
//     }
// };
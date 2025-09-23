#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&ans,vector<int>&temp,int n,int index,vector<int>& arr){
    if(index==n){
        ans.push_back(temp);
        return ;
    }
    solve(ans,temp,n,index+1,arr);
    temp.push_back(arr[index]);
    solve(ans,temp,n,index+1,arr);
    temp.pop_back();
}
int main(){
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0; i<n; i++) {
    cin >> arr[i];
}
   vector<int>temp;
   vector<vector<int>>ans;
 solve(ans, temp, n, 0, arr);

  for(int i=0; i<ans.size(); i++) {
    for(int j=0; j<ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
}

}



// class Solution {
// public:

// void solve(vector<vector<int>>&ans,vector<int>&temp,int n,int index,vector<int>& arr){
//     if(index==n){
//         ans.push_back(temp);
//         return ;
//     }
//     solve(ans,temp,n,index+1,arr);
//     temp.push_back(arr[index]);
//     solve(ans,temp,n,index+1,arr);
//     temp.pop_back();
// }

//     vector<vector<int>> subsets(vector<int>& arr) {
//         // code here
       
//         vector<int>temp;
//         vector<vector<int>>ans;
//         int n=arr.size();
//         solve(ans,temp,n,0,arr);
//         return ans;
       
//     }
// };
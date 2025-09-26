#include<bits/stdc++.h>>
using namespace std;

void solve(int n,vector<int>&arr,vector<vector<int>>&ans,vector<int>&temp,int target,int index){
     if(index==n){
        if(target==0)
        ans.push_back(temp);
        return ;
     }
     if(arr[index]<=target){
        temp.push_back(arr[index]);
         solve(n,arr,ans,temp,target-arr[index],index);
         temp.pop_back();
     }
     solve(n,arr,ans,temp,target,index+1);
}



int main(){
     int n;
     cin>>n;

     int target;
     cin>>target;

     vector<int>arr(n);

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

     vector<int>temp;
     vector<vector<int>>ans;
     solve(n,arr,ans,temp,target,0);

     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
}
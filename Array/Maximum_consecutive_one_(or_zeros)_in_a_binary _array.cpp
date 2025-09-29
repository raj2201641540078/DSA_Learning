#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
     cin>>n;
     vector<int>arr(n);

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

      int count_one=0;

      int max_one=0;

      for(int i=0;i<n;i++){
        if(arr[i]==1){
            count_one++;
            max_one=max(max_one,count_one);
        }
        else{
            count_one=0;
        }
        
        
      }
        int count_zero=0;
        int max_zero=0;
      for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_zero++;
            max_zero=max(max_zero,count_zero);
        }
        else{
            count_zero=0;
        }
        
        
      }

      cout<<max(max_one,max_zero);
}
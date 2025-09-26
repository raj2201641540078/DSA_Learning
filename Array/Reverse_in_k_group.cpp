#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,k;
   cin>>n>>k;

   vector<int>arr(n);

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   for(int i=0;i<n;i+=k){
       int start=i;
       int end=min(i+k-1,n-1);

       while(start<end){
           int temp=arr[start];
           arr[start]=arr[end];
           arr[end]=temp;
           start++;
           end--;
       }
   }

   // print only once after processing all groups
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   return 0;
}

// time complexity: O(n)
// Space complexity: O(1)



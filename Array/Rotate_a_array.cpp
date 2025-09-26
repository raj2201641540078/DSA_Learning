// class Solution {
//   public:

//     // Function to rotate an array by d elements in counter-clockwise direction.
//     void rotateArr(vector<int>& arr, int d) {
//         // code here
//         int n = arr.size();
//     if (n == 0) return; 

//     d = d % n;
//     vector<int> ans(n);

//     for (int i = 0; i < n; i++) {
//         ans[i] = arr[(i + d) % n]; 
//     }
//     arr = ans;
//     }
// };




// Right Rotation 

// Example Run:
// Input: [1, 2, 3, 4, 5], d = 2
// Output: [4, 5, 1, 2, 3]


// #include<bits/stdc++.h>
// using namespace std;

// void rightRotate(vector<int>& arr, int d) {
//     int n = arr.size();
//     vector<int> ans(n);

//     for(int i = 0; i < n; i++) {
//         ans[(i + d) % n] = arr[i];   // put element at shifted index
//     }

//     arr = ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int d = 2;

//     rightRotate(arr, d);

//     cout << "Right Rotation by " << d << ": ";
//     for(int x : arr) cout << x << " ";
//     return 0;
// }
// Time Complexity: O(n)



// Lwft Rotation 


// Example Run:
// Input: [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]



// #include<bits/stdc++.h>
// using namespace std;

// void leftRotate(vector<int>& arr, int d) {
//     int n = arr.size();
//     vector<int> ans(n);

//     for(int i = 0; i < n; i++) {
//         ans[i] = arr[(i + d) % n];   // take element from shifted index
//     }

//     arr = ans;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int d = 2;

//     leftRotate(arr, d);

//     cout << "Left Rotation by " << d << ": ";
//     for(int x : arr) cout << x << " ";
//     return 0;
// }



// Time Complexity: O(n)

// ✅ Summary:

// Left Rotation (d=2): [1, 2, 3, 4, 5] → [3, 4, 5, 1, 2]

// Right Rotation (d=2): [1, 2, 3, 4, 5] → [4, 5, 1, 2, 3]
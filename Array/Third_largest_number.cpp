#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n < 3) {
        cout << -1 << endl;
        return 0;
    }

    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }

    int k = 2;
    while (!pq.empty() && k--) {
        pq.pop();
    }

    if (pq.empty()) {
        cout << -1 << endl;
    } else {
        cout << pq.top() << endl;
    }

    return 0; 

}

// class Solution {
//   public:
//     int thirdLargest(vector<int> &arr) {
//         // Your code here
//         int n = arr.size();
//         if (n < 3) return -1;

//         priority_queue<int> pq;

//         for (int i = 0; i < n; i++) {
//             pq.push(arr[i]);
//         }

//         int k = 2;
//         while (!pq.empty() && k--) {
//             pq.pop();
//         }
//         if (pq.empty()) return -1;

//         return pq.top();
//     }
// };
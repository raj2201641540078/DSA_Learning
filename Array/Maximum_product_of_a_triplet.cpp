#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 3) {
        cout << "Not enough elements" << endl;
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int prod1 = arr[n-1] * arr[n-2] * arr[n-3];
    int prod2 = arr[0] * arr[1] * arr[n-1];

    int ans = max(prod1, prod2);

    cout << ans << endl;

    return 0; // Make sure main returns int
} // <-- Final closing brace for main

// time complexity: O(n log n) due to sorting

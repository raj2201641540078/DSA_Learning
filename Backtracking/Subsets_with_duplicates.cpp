#include<bits/stdc++.h>
using namespace std;

void solve(int index, vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp) {
    if (index == arr.size()) {
        ans.push_back(temp);
        return;
    }
    // Not take
    solve(index + 1, arr, ans, temp);

    // Take
    temp.push_back(arr[index]);
    solve(index + 1, arr, ans, temp);
    temp.pop_back();
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> temp;
    vector<vector<int>> ans1;
    sort(arr.begin(), arr.end());

    solve(0, arr, ans1, temp);

    // Remove duplicates using set
    set<vector<int>> st(ans1.begin(), ans1.end());
    vector<vector<int>> ans2(st.begin(), st.end());

    // Print subsets
    for (int i = 0; i < ans2.size(); i++) {
        for (int j = 0; j < ans2[i].size(); j++) {
            cout << ans2[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

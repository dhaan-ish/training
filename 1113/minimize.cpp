#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sol(vector<int> arr, int k) {
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int ans = arr[n - 1] - arr[0];
    int maxi, mini;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= k) {
            maxi = max(arr[i - 1] + k, arr[n - 1] - k);
            mini = min(arr[0] + k, arr[i] - k);
            ans = min(ans, maxi - mini);
        }
    }
    return ans;
}

int main() {
    cout << sol({1, 5, 8, 10}, 2) << endl;
    cout << sol({3, 9, 12, 16, 20}, 3) << endl;
    return 0;
}

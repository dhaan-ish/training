#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int sol(vector<int> arr){
    int n = arr.size();
    unordered_set<int> us;
    int ans = 0;
    for (int i = 0; i < n; i++)
        us.insert(arr[i]);
    for (int i = 0; i < n; i++) {
        if (us.find(arr[i] - 1) == us.end()) {
            int j = arr[i];
            while (us.find(j) != us.end())
                j++;
            ans = max(ans, j - arr[i]);
        }
    }
    return ans;
}

int main(){
    cout << sol({1, 9, 3, 10, 4, 20, 2}) << endl;
}
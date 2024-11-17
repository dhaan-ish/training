#include <iostream>
#include <vector>

using namespace std;

int sol(vector<int> coins, int n, int sum){
    vector<int> dp(sum + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = coins[i]; j <= sum; j++) {
            dp[j] += dp[j - coins[i]];
        }
    }

    return dp[sum];
}

int main(){
    cout << sol({1,2,3}, 3, 4) << endl;
    cout << sol({2, 5, 3, 6}, 4, 10) << endl;
}
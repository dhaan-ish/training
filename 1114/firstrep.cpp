#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sol(vector<int> arr, int n) {
    int morethanone = -1;
    int index = -1;  // Store the index of the first duplicate element with the highest value
    vector<int> seen;

    for (int i = 0; i < n; i++) {
        if (find(seen.begin(), seen.end(), arr[i]) != seen.end()) {
            if (morethanone < arr[i]) {
                morethanone = arr[i];
                index = i;
            }
        }
        seen.push_back(arr[i]);
    }
    
    return index;
}

int main() {
    cout << sol({1, 5, 3, 4, 3, 5, 6}, 7) << endl;
    cout << sol({1, 2, 3, 4}, 4) << endl;
}

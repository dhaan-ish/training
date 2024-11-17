#include <iostream>
#include <vector>

using namespace std;

int sol(vector<int> arr, int n) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 1) {
            if (mid == 0 || arr[mid - 1] == 0) {
                return mid;
            } else {
                high = mid - 1;
            }
        } else {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main() {
    cout << sol({0, 0, 0, 1, 1}, 5 ) << endl;
    cout << sol({0, 0, 0, 0}, 4) << endl;   
    cout << sol({1, 1, 1}, 3) << endl;   
    cout << sol({0, 1, 1}, 3) << endl;   
    
    return 0;
}

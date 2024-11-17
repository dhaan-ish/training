#include <iostream>
#include <vector>

using namespace std;

int sol(const vector<int> arr, int n) {
    int dif = -1;
    int i, j;

    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] >= arr[i] && dif < (j - i)) {
                dif = j - i;
            }
        }
    }
    return dif;
}

int main() {

    cout << sol({34, 8, 10, 3, 2, 80, 30, 33, 1}, 9) << endl;
    cout << sol({9, 2, 3, 4, 5, 6, 7, 8, 18, 0}, 10) << endl;
}

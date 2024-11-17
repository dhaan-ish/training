#include <iostream>
#include <vector>

using namespace std;

vector<int> sol(vector<int> arr, int n) {
    for (int i = 0; i < n; i += 2) {
        if (i > 0 && arr[i] < arr[i - 1]) {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
        if (i + 1 < n && arr[i] < arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return arr;
}

int main() {
    vector<int> res = sol({1, 2, 3, 4, 5}, 5);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;

    res = sol({2, 4, 7, 8, 9, 10}, 6);
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
}

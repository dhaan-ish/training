#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sol(vector<int> arr, int k){
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main(){
    cout << sol({7, 10, 4, 3, 20, 15}, 3) << endl;
    cout << sol({7, 10, 4, 3, 20, 15}, 4) << endl;
}
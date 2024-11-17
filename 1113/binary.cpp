#include <iostream>
#include <vector>  

using namespace std;

int sol(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}

int main(){
    cout << sol({1,2,3,4,5,6,7,8}, 2) << endl;
    cout << sol({2,5,7,9,10,30,67}, 12) << endl;
}
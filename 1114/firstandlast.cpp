#include <iostream>
#include <vector>

using namespace std;

int first(vector<int> arr, int n, int tar){
    int start = 0;
    int end = n - 1;
    int res = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (arr[mid] == tar){
            res = mid;
            end = mid - 1;
        }
        else if (arr[mid] > tar){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return res;
}

int last(vector<int> arr, int n, int tar){
    int start = 0;
    int end = n - 1;
    int res = -1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        if (arr[mid] == tar){
            res = mid;
            start = mid + 1;
        }
        else if (arr[mid] > tar){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return res;
}

void sol(vector<int> arr, int n, int tar){
    cout << first(arr, n, tar) << " ";
    cout << last(arr, n, tar) << endl;
}

int main(){
    sol({1, 3, 5, 5, 5, 5, 67, 123, 125}, 9, 5);	
    sol({1, 3, 5, 5, 5, 5, 7, 123, 125 }, 9, 7);
}


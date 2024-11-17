#include <iostream>
#include <vector>

using namespace std;
 
int sol(vector<int> arr){
    int sumi = 0;
    for (int i : arr){
        sumi += i;
    }

    int sumi1 = 0;

    for (int i = 0; i< arr.size(); i++){
        sumi -= arr[i];
        if (sumi == sumi1){
            return i + 1;
        }
        sumi1 += arr[i];
    }
    return -1;
}

int main(){
    cout << sol({-7, 1, 5, 2, -4, 3, 0}) << endl;
    cout << sol({1, 2, 3}) << endl;
}
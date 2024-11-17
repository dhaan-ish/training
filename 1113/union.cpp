#include <iostream>
#include <vector>
#include <set>

using namespace std;

int sol(vector<int> arr1, vector<int> arr2){
    set<int> s;
    for(int i = 0; i < arr1.size(); i++){
        s.insert(arr1[i]);
    }
    for(int i = 0; i < arr2.size(); i++){
        s.insert(arr2[i]);
    }
    return s.size();
}

int main(){
    cout << sol({1, 2, 3, 4, 5}, {1, 2, 3}) << endl;
    cout << sol({85, 25, 1, 32, 54, 6}, {85, 2}) << endl;
    cout << sol({1, 2, 1, 1, 2}, {2, 2, 1, 2, 1}) << endl;
}
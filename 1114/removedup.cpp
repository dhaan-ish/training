#include <iostream>
#include <vector>

using namespace std;

vector<int> sol(vector<int> arr, int n){

    int i = 0; 
    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) { 
            i++; 
            arr[i] = arr[j];
        }
    }
    arr.resize(i + 1); 
    return arr;  
}

int main(){
    vector<int> res;

    res = sol({2, 2, 2, 2, 2}, 4);
    for (int i : res){
        cout << i << " ";
    }
    cout << endl;

    res = sol({1, 2, 2, 3, 4, 4, 4, 5, 5}, 9);
    for (int i : res){
        cout << i << " ";
    }
    cout << endl;

}
#include <iostream>
#include <vector>

using namespace std;

    int stock(vector<int> a, int n){
        int res = 0;
        
        for (int i = 1; i < n; i++){
            if (a[i] > a[i - 1]){
                res += a[i] - a[i - 1];
            }
        }
        return res;
    }


int main(){

    cout << stock({ 100, 180, 260, 310, 40, 535, 695 }, 7) << endl;

    cout << stock({4,2,2,2,4}, 5) << endl;
}
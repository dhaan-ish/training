#include <iostream>
#include <vector>

using namespace std;

int sol(vector<vector<int>> arr){
    int maxi = -1;
    int r = 0;
    int rows = arr.size();
    int cols = arr[0].size();
    int c = cols - 1;

    while (r < rows && c >=0){
        if (arr[r][c] == 0){
            r++;
        }else{
            maxi = r;
            c -= 1;
        }
    }
    return maxi;
}

int main(){
    cout << sol({ { 0, 0, 0, 1 },
                { 0, 1, 1, 1 },
                { 1, 1, 1, 1 },
                { 0, 0, 0, 0 } })  << endl;
}
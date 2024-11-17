#include <vector>
#include <iostream>

using namespace std;

void processMatrix(const vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> res(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 1) {
                for (int k = 0; k < m; k++) {
                    res[i][k] = 1;
                }
                for (int k = 0; k < n; k++) {
                    res[k][j] = 1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << res[i][j] << " "; 
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    vector<vector<vector<int>>> mats = {
        {{1, 0}, {0, 0}},
        {{0, 0, 0}, {0, 0, 1}},
        {{1, 0, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 0}}
    };

    for (auto mat : mats) {
        processMatrix(mat);
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void printspiral(vector<vector<int>>& mat, int n, int m) {
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << mat[top][i] << " ";
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            cout << mat[i][right] << " ";
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<vector<int>> mat1 = {{1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18}};
    printspiral(mat, mat.size(), mat[0].size());
    cout << endl;
    printspiral(mat1, mat1.size(), mat1[0].size());
	cout << endl;
    return 0;
}

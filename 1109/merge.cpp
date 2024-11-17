#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> merge(vector<vector<int>> interval){
	sort(interval.begin(), interval.end());
	int start = interval[0][0];
	int end = interval[0][1];

	vector<vector<int>> res;

	for (int i = 1; i < interval.size(); i++){
		if (interval[i][0] <= end){
			end = max(end, interval[i][1]);
		}else{
			res.push_back({start, end});
			start = interval[i][0];
			end = interval[i][1];
		}
	}
	res.push_back({start, end});
	return res;
}

int main(){
	vector<vector<vector<int>>> intervals = {{{7, 8}, {1, 5}, {2, 4}, {4, 6}}, {{1, 3}, {2, 4}, {6, 8}, {9, 10}}};
	vector<vector<int>> res;
	for (auto interval : intervals) {
        res = merge(interval);
        
        for (auto re : res) {
            cout << "[" << re[0] << ", " << re[1] << "] ";
        }
        cout << endl;
    }
}

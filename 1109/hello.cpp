#include <iostream>
#include <vector>

using namespace std;

int findMaxSubarray(vector<int> lst){
	int maxi = lst[0];
	int res = lst[0];

	for (int i = 1; i < lst.size(); i++){
		maxi = max(lst[i], maxi + lst[i]);
		res = max(maxi, res);
	}

	for (int ls : lst){
		cout << ls << " ";
	}
	cout << endl;
	return res;
}

int main(){
	vector<vector<int>> lst = {{2, 3, -8, 7, -1, 2, 3}, {-2, -4}, {5, 4, 1, 7, 8}};
	for (auto ls : lst){
		cout << findMaxSubarray(ls) << endl;
	}
}
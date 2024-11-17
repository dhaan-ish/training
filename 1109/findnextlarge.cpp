#include <iostream>
#include <vector>

using namespace std;

vector<int> findnextlarge(vector<int> arr){
	int n = arr.size();
	vector<int> res(n);

	for (int i = 0; i < n; i++){
		int curmax = arr[i];
		for (int j = i + 1; j < n; j++){
			curmax = max(curmax, arr[j]);
			if (curmax != arr[i]){
				break;
			}
		}
		if (curmax != arr[i]){
			res[i] = curmax;
		}else{
			res[i] = -1;
		}
	}

	return res;
}

int main(){
	vector<vector<int>> arrs = {{4 , 5 , 2 , 25}, {13 , 7, 6 , 12}};
	vector<int> res;

	for (auto arr : arrs){
		res = findnextlarge(arr);
		for (int i = 0; i < arr.size(); i++){
			cout << arr[i] << "->" << res[i] << endl;
		}
		cout << endl;
	}
}

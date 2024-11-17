#include <iostream>
#include <vector>

using namespace std;

void findMaxPro(vector<int> lst){
	int res = lst[0];
	int maxi = lst[0];
	int mini = lst[0];

	for (int i = 1; i < lst.size(); i++){
		if (lst[i] < 0){
			int temp = maxi;
			maxi = mini;
			mini = temp;
		}

		maxi = max(lst[i], maxi * lst[i]);
		mini = min(lst[i], mini * lst[i]);
		res = max(res, maxi);
	}
	for (int i : lst){
		cout << i << " ";
	}
	cout << endl << res << endl;
}

int main(){
	vector<vector<int>> lst = {{-2, 6, -3, -10, 0, 2}, {-1, -3, -10, 0, 60}};
	for (auto ls : lst){
		findMaxPro(ls);
	}
}

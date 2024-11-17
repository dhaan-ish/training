#include <iostream>
#include <vector>

using namespace std;

void rotsearch(vector<int> lst, int target){
	int left = 0;
	int right = lst.size() - 1;
	int mid;
	for (int ls : lst){
		cout << ls << " ";
	}
	cout << endl;
	while (left <= right){
		mid = (left + right) / 2;

		if (lst[mid] == target){
			cout << mid << endl;
			return;
		}

		if (lst[left] <= lst[mid]){
			if (target < lst[mid] && lst[left] <= target){
				right = mid - 1;
			}else{
				left = mid + 1;
			}
		}else{
			if (target > lst[mid] && target <= lst[right]){
				left = mid + 1;
			}else{
				right = mid - 1;
			}
		}
	}
	cout << -1 << endl;

}

int main(){
	vector<vector<int>> lst = {{4, 5, 6, 7, 0, 1, 2}, { 4, 5, 6, 7, 0, 1, 2 }, {50, 10, 20, 30, 40}};
	vector<int> targets = {0, 3, 10};

	for (int i = 0; i < targets.size(); i++){
		rotsearch(lst[i], targets[i]);
	}
}

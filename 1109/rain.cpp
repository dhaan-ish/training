#include <iostream>
#include <vector>

using namespace std;

int findWater(vector<int> ele){
	int left = 0;
	int right = ele.size() - 1;
	int leftmax = 0;
	int rightmax = 0;
	int res = 0;

	while (left < right){
		if (ele[left] < ele[right]){
			if (ele[left] >= leftmax){
				leftmax = ele[left];
			}else{
				res += leftmax - ele[left];
			}
			left++;
		}else{
			if (ele[right] >= rightmax){
				rightmax = ele[right];
			}else{
				res += rightmax - ele[right];
			}
			right--;
		}
	}
	return res;
}

int main(){
	vector<vector<int>> elevations = {{3, 0, 1, 0, 4, 0, 2}, {3, 0, 2, 0, 4}, {1, 2, 3, 4}, {10, 9, 0, 5}};
	for (auto elevation : elevations){
		cout << findWater(elevation) << endl;
	}
}

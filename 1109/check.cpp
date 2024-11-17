#include <iostream>
#include <vector>

using namespace std;

int check(vector<int> height){
	int leftmax = 0;
	int rightmax = 0;
	int left = 0;
	int right = height.size() - 1;
	int res = 0;

	while (left < right){
		if (height[left] < height[right]){
			if (height[left] >= leftmax){
				leftmax = height[left];
			}else{
				res += leftmax - height[left]; 
			}
			left++;
		}else{
			if (height[right] >= rightmax){
				rightmax = height[right];
			}else{
				res += rightmax - height[right];
			}
			right--;
		}
	}
	return res;
}


int main(){
	vector<vector<int>> elevations = {{3, 0, 1, 0, 4, 0, 2}, {3, 0, 2, 0, 4}, {1, 2, 3, 4}, {10, 9, 0, 5}};
	for (auto elevation : elevations){
		cout << check(elevation) << endl;
	}
}
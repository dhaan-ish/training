#include <iostream>
#include <vector>

using namespace std;

void findMaxWater(vector<int> container){
	int left = 0;
	int right = container.size() - 1;
	int maxi = 0;
	int cur;

	for (int h : container){
		cout << h << " ";
	}

	cout << endl;

	while(left < right){
		cur = min(container[left], container[right]) * (right - left);
		maxi = max(cur, maxi);

		if (container[left] < container[right]){
			left++;
		}else{
			right--;
		}
	}
	cout << maxi << endl;
}

int main(){
	vector<vector<int>> containers = {{1, 5, 4, 3}, {3, 1, 2, 4, 5}};
	for (auto container : containers){
		findMaxWater(container);
	}
}

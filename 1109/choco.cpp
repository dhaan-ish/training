#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int findMinDif(vector<int> chocos, int st){
	sort(chocos.begin(), chocos.end());
	int mini = INT_MAX;
	int cur;

	for (int i = 0; i < chocos.size() - st; i++){
		cur = chocos[i + st - 1] - chocos[i];
		mini = min(cur, mini);
	}
	return mini;
}

int main(){
	vector<vector<int>> chocos = {{7, 3, 2, 4, 9, 12, 56}, {7, 3, 2, 4, 9, 12, 56}};
	vector<int> st = {3, 5};

	for (int i = 0; i < st.size(); i++){
		cout << findMinDif(chocos[i], st[i]) << endl;
	}
}

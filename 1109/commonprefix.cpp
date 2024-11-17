#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string findcommon(vector<string> arr){
	sort(arr.begin(), arr.end());

	string first = arr[0];
	string last = arr[arr.size() - 1];
	string cp = "";
	int n = min(first.size(), last.size());

	for (int i = 0; i < n; i++){
		if (first[i] == last[i]){
			cp += first[i];
		}else{
			break;
		}
	}
	if (cp.empty()){
		return "-1";
	}else{
		return cp;
	}
}

int main(){
	vector<vector<string>> arrs = {{"geeksforgeeks", "geeks", "geek", "geezer"}, {"hello", "world"}};
	string res;

	for (auto arr : arrs){
		res = findcommon(arr);
		cout << res << endl;
	}
}

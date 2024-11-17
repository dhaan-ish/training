
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool checkanagram(string s1, string s2){
	int n = s1.size();
	int m = s2.size();

	if (n != m){
		return false;
	}

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	for (int i = 0; i < n; i++){
		if (s1[i] != s2[i]){
			return false;
		}
	}
	return true;
}

int main(){
	vector<vector<string>> arrs = {
        {"geeks", "kseeg"},
        {"allergy", "allergic"},
        {"g", "g"},
        {"ok", "ko"},
    };

	for (auto arr : arrs){
		if (checkanagram(arr[0], arr[1])){
		cout << "true" << endl;
		}else{
			cout << "false" << endl;
		}
	}
}

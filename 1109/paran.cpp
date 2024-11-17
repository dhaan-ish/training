#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

bool isbalanced(string s){
	stack<char> st;
	st.push(s[0]);
	int i = 1;

	while (i < s.size()){
		if (s[i] == '('){
			st.push(s[i]);
		}else{
			if (st.empty() || st.top() != '(') {
                return false; 
            }
            st.pop();
		}
		i++;
	}
	return true;
}

int main(){
	vector<string> tc = {"((()))()()", "())((())"};
	for (string t : tc){
		if (isbalanced(t)){
			cout << "Balanced" << endl;
		}else{
			cout << "Not Balanced" << endl;
		}
	}
}

#include <iostream>
#include <stack>

using namespace std;

void deletemid(stack<int>& st, int size, int curr = 0){
	if (curr == size / 2){
		st.pop();
		return;
	}

	int temp = st.top();
	st.pop();

	deletemid(st, size, curr + 1);

	st.push(temp);
}

void deletes(stack<int>& st){
	deletemid(st, st.size());
}

int main(){
	stack<int> st;
	stack<int> st1;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	st1.push(1);
	st1.push(2);
	st1.push(3);
	st1.push(4);
	st1.push(5);
	st1.push(6);

	deletes(st);
	deletes(st1);

	while (!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	while (!st1.empty()){
		cout << st1.top() << " ";
		st1.pop();
	}
	cout << endl;
	return 0;
}

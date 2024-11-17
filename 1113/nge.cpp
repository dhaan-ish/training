#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void sol(vector<int> arr){
    stack<int> st;

    st.push(arr[0]);
    
    for (int i = 1; i < arr.size(); i++){
        if (st.empty()){
            st.push(arr[i]);
            continue;
        }

        while (!st.empty() && st.top() < arr[i]){
            cout << st.top() << "->" << arr[i] << endl;
            st.pop();
        }

        st.push(arr[i]);
    }

    while (!st.empty()){
        cout << st.top() << "->" << -1 << endl;	
        st.pop();
    }
}

int main(){ 
    sol({4 , 5 , 2 , 25});
    cout << endl;
    sol({13 , 7, 6 , 12});
}
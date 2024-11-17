#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getpal(const string &s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        left--;  
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

int main() {
    vector<string> st = {"forgeeksskeegfor", "Geeks", "abc", ""};
    for (string s : st){
        string large;

        for (int i = 0; i < s.size(); i++) {
            string s1 = getpal(s, i, i);
            string s2 = getpal(s, i, i + 1);
            if (s1.size() > large.size()) {
                large = s1;
            }
            if (s2.size() > large.size()) {
                large = s2;
            }
        }
        cout << large << endl; 
    }   

}

#include <iostream>

using namespace std;

long long fact(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }

    long long fa = 1;

    for (int i = 2; i <= n; i++) {
        fa *= i;
    }
    return fa;
}

int main() {
    cout << fact(0) << endl;
    cout << fact(1) << endl;
    cout << fact(100) << endl; 
}

#include <queue>
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;

    void printright() {

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size(); 

            for (int i = 0; i < n; i++) {
                Node* cur = q.front();
                q.pop();
                if (i == n - 1) {
                    cout << cur->data << " ";
                }
                if (cur->left != nullptr) {
                    q.push(cur->left);
                }
                if (cur->right != nullptr) {
                    q.push(cur->right);
                }
            }
        }
    }
};

int main() {
    BinaryTree t;

    t.root = new Node(1);
    t.root->left = new Node(2);
    t.root->right = new Node(3);
    t.root->left->left = new Node(4);
    t.root->left->left->right = new Node(5);

    t.printright(); 

    cout << endl;

    BinaryTree t1;

    t1.root = new Node(1);
    t1.root->left = new Node(2);
    t1.root->right = new Node(3);
    t1.root->right->left = new Node(4);
    t1.root->right->right = new Node(5);

    t1.printright();

    cout << endl;
    
    return 0;
}

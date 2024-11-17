#include <queue>
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree{
public:
    Node* root;

    BinaryTree() : root(nullptr) {}

    int findHeight(){
        queue<Node*> q;

        q.push(root);
        int height = 0;

        while(!q.empty()){
            int n = q.size();

            for (int i = 0; i < n; i++){
                Node* cur = q.front();
                q.pop();

                if (cur -> left != nullptr){
                    q.push(cur -> left);
                }
                if (cur -> right != nullptr){
                    q.push(cur -> right);
                }
            }
            height++;
        }
        return height;
    }  
};

int main(){
    BinaryTree t;

    t.root = new Node(12);
    t.root->left = new Node(8);
    t.root->right = new Node(18);
    t.root->left->left = new Node(5);
    t.root->left->right = new Node(11);

    cout << t.findHeight() << endl;

    BinaryTree t1;

    t1.root = new Node(1);
    t1.root->left = new Node(2);
    t1.root->right = new Node(3);
    t1.root->left->left = new Node(4);
    t1.root->right->right = new Node(5);
    t1.root->right->right->left = new Node(6);
    t1.root->right->right->right = new Node(7);

    cout << t1.findHeight() << endl;
}
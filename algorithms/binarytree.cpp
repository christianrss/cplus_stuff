#include <iostream>
using namespace std;

class Node {
    Node * left;
    Node * right;

    Node(int d) {
        data = d;
        left = right = NULL;
    }
};

node* buildTree() {
    int d;
    cin>>d;
    if (d==-1) {
        return NULL;
    }

    Node* n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;

}

int main() {

}

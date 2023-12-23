# Binary Search Tree (BST)

    It's a type of binary tree data structure that organizes its elements in a specific order to facilitate efficient searching, insertion, and deletion of elements.

## Key properties

    - Each node has at most two children, called the left child and right child.
  
    - The value of every node in a node's left subtree is less than the node's value.

    - The value of every node in a node's right subtree is greater than the node's value.

    - Both the left and right subtrees must also be binary search trees.

## Example

``` cpp

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

// Insertion function
Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}

// Example usage:
int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
}

```

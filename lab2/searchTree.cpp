#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insert(Node* node, int value) {
    if (node == nullptr) {
        return new Node(value);
    }
    if (value < node->data) {
        node->left = insert(node->left, value);
    } else if (value > node->data) {
        node->right = insert(node->right, value);
    }
    return node;
}

bool search(Node* node, int value) {
    if (node == nullptr) {
        return false;
    }
    if (node->data == value) {
        return true;
    }
    if (value < node->data) {
        return search(node->left, value);
    } else {
        return search(node->right, value);
    }
}

void inOrder(Node* node) {
    if (node != nullptr) {
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "Прямой обход дерева: ";
    inOrder(root); 
    cout << endl;

    int target = 40;
    if (search(root, target)) {
        cout << "Элемент " << target << " найден в дереве." << endl;
    } else {
        cout << "Элемент " << target << " не найден в дереве." << endl;
    }

    return 0;
}


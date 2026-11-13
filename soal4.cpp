
#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node *root = NULL;
int jumlah = 0;
int total = 0;

node* insert(node *root, int nilai) {
    if (root == NULL) {
        node *newNode = new node;
        newNode->data = nilai;
        newNode-> left = NULL;
        newNode->right = NULL;

        return newNode;
    }

    if (nilai < root->data) {
        root->left = insert(root->left, nilai);
    } else if (nilai > root->data) {
        root->right = insert(root->right, nilai);
    }

    return root;
}

void inorder(node *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int nilaiTerkecil(node *root) {
    node *temp = root;

    while (temp->left != NULL) {
        temp = temp->left;
    }

    return temp->data;
}

int nilaiTerbesar(node *root) {
    node *temp = root;

    while (temp->right != NULL) {
        temp = temp->right;
    }

    return temp->data;
}

int main() {
    int nilai;

    cout << "Masukkan angka : " << endl;

    while (cin >> nilai && nilai != 0) {
        root = insert(root, nilai);

        total += nilai;
        jumlah++;
    }

    if (root == NULL) {
        cout << "Tree kosong!" << endl;
        return 0;
    }

    cout << "In-Order        : ";
    inorder(root);

    cout << endl;

    cout << "Nilai terkecil  : "
         << nilaiTerkecil(root) << endl;

    cout << "Nilai rata-rata : "
         << (double) total / jumlah << endl;

    return 0;
}

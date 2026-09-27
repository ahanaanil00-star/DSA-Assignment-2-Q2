#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data) {
    struct Node* newNode =
        (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insert(struct Node* root, int data) {
    if (root == NULL)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int bstSearch(struct Node* root, int key, int* comparisons) {
    while (root != NULL) {
        (*comparisons)++;

        if (key == root->data)
            return 1;
        else if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }

    return 0;
}

int linearSearch(int arr[], int n, int key, int* comparisons) {
    for (int i = 0; i < n; i++) {
        (*comparisons)++;

        if (arr[i] == key)
            return 1;
    }

    return 0;
}

int main() {

    int arr[] = {45, 20, 60, 10, 30, 50, 70, 25, 55};
    int n = 9;

    struct Node* root = NULL;

    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    printf("Inorder Traversal: ");
    inorder(root);

    printf("\nPreorder Traversal: ");
    preorder(root);

    printf("\nPostorder Traversal: ");
    postorder(root);

    int keys[] = {25, 55, 90};

    printf("\n\nSearch Results:\n");

    for (int i = 0; i < 3; i++) {

        int bstComp = 0;
        int linearComp = 0;

        int bstResult =
            bstSearch(root, keys[i], &bstComp);

        int linearResult =
            linearSearch(arr, n, keys[i], &linearComp);

        printf("\nKey = %d\n", keys[i]);

        printf("BST Search: %s, Comparisons = %d\n",
               bstResult ? "Found" : "Not Found",
               bstComp);

        printf("Linear Search: %s, Comparisons = %d\n",
               linearResult ? "Found" : "Not Found",
               linearComp);
    }

    return 0;
}

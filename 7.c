#include <stdio.h>

struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

int sum(struct Node* node) {
    if (node == NULL) {
        return 0;
    }
    return sum(node->left) + node->value + sum(node->right);
}

int main() {
    // Create the tree nodes
    struct Node node1, node2, node3, node4, node5;
    node1.value = 1;
    node2.value = 2;
    node3.value = 3;
    node4.value = 4;
    node5.value = 5;

    // Connect the nodes to form a binary tree
    node1.left = &node2;
    node1.right = &node3;
    node2.left = &node4;
    node2.right = NULL;
    node3.left = NULL;
    node3.right = &node5;
    node4.left = NULL;
    node4.right = NULL;
    node5.left = NULL;
    node5.right = NULL;

    // Calculate the sum of the values in the tree
    int treeSum = sum(&node1);
    printf("Sum of the tree values: %d\n", treeSum);

    return 0;
}

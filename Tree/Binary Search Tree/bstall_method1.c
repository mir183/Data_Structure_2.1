#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int num) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = num;
    ptr->left = NULL;
    ptr->right = NULL;

    if (root == NULL) {
        root = ptr;
        return;
    }

    struct node *parent = NULL;
    struct node *temp = root;
    while (temp != NULL) {
        parent = temp;
        if (num < temp->data)
            temp = temp->left;
        else
            temp = temp->right;
    }

    if (num < parent->data)
        parent->left = ptr;
    else
        parent->right = ptr;
}

struct node* search(int num) {
    struct node *temp = root;
    while (temp != NULL) {
        if (temp->data == num)
            return temp;
        if (num > temp->data)
            temp = temp->right;
        else
            temp = temp->left;
    }
    return NULL;
}

int findMin(struct node *node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node->data;
}

int findMax(struct node *node) {
    while (node->right != NULL) {
        node = node->right;
    }
    return node->data;
}

struct node* deleteNode(struct node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        root->data = findMin(root->right);
        root->right = deleteNode(root->right, root->data);
    }
    return root;
}

void printInorder(struct node* node) {
    if (node == NULL)
        return;

    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

void printPreorder(struct node* node) {
    if (node == NULL)
        return;

    printf("%d ", node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}

void printPostorder(struct node* node) {
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ", node->data);
}

int main() {
    printf("A blank tree has been created.\n");
    int choice;
    while (1) {
        printf("1. Insert\n2. Delete\n3. Search\n4. Inorder\n5. Preorder\n6. Postorder\n7. Maximum\n8. Minimum\n9. Exit\n");
        printf("Select: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int val;
            printf("Enter the value: ");
            scanf("%d", &val);
            insert(val);
        } else if (choice == 2) {
            int val;
            printf("Enter the value to delete: ");
            scanf("%d", &val);
            root = deleteNode(root, val);
        } else if (choice == 3) {
            int val;
            printf("Enter the value to search: ");
            scanf("%d", &val);
            struct node *result = search(val);
            if (result)
                printf("Element found\n");
            else
                printf("Element not found\n");
        } else if (choice == 4) {
            printf("Inorder Traversal: ");
            printInorder(root);
            printf("\n");
        } else if (choice == 5) {
            printf("Preorder Traversal: ");
            printPreorder(root);
            printf("\n");
        } else if (choice == 6) {
            printf("Postorder Traversal: ");
            printPostorder(root);
            printf("\n");
        } else if (choice == 7) {
            printf("Maximum: %d\n", findMax(root));
        } else if (choice == 8) {
            printf("Minimum: %d\n", findMin(root));
        } else if (choice == 9) {
            exit(0);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

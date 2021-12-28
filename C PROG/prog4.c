#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void insert(struct node **tree, int num);
void preorder(struct node *root);
void inorder(struct node *root);
void postorder(struct node *root);
int main(void)
{
    char ans = 'N';
    struct node *root;
    int new_node_data;
    root = NULL;
    do
    {
        printf("\nEnter DATA :");
        scanf("%d", &new_node_data);
        insert(&root, new_node_data);
        printf("\nDo you want to enter more(y/n)? :");
        scanf(" %c", &ans);
    } while (ans == 'y');
    printf("Inorder traversal: ");
    inorder(root);
    printf("\nPreorder traversal: ");
    preorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);
    return 0;
}
void insert(struct node **tree, int num)
{
    struct node *temp = NULL;
    if (!(*tree))
    {
        temp = malloc(sizeof(struct node));
        temp->left = temp->right = NULL;
        temp->data = num;
        *tree = temp;
        return;
    }
    if (num < (*tree)->data)
    {
        insert(&(*tree)->left, num);
    }
    else if (num > (*tree)->data)
    {
        insert(&(*tree)->right, num);
    }
}
void preorder(struct node *root)
{
    if (root)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}
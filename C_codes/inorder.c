// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node Node;

struct node *newNode(int data)
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(Node *node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
}

void printPreorder(Node *node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	printPreorder(node->left);
	printPreorder(node->right);
}

void printPostorder(Node *node)
{
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	printf("%d ", node->data);
}

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}

int main()
{
	Node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	printf("Inorder traversal of binary tree is \n");
	printInorder(root);
	printf("\nPreorder traversal of binary tree is \n");
	printPreorder(root);
	printf("\nPostorder traversal of binary tree is \n");
	printPostorder(root);
	printf("\nHeight of binary tree is %d \n", height(root));
	return 0;
}

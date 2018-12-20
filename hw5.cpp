#include<iostream>

using namespace std;

struct Node {
	char data;
	struct Node *left;
	struct Node *right;
};

void preorder(BinaryTreeNode *root)
{
	if(root == NULL)
	{
		printf(root -> data);
		preorder(root -> left);
		preorder(root -> right);
	}
}

Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else
		root->right = Insert(root->right,data);
	return root;
}

int main()
{
	Node *root
	root = new Node(A);
	root -> right = new Node(B);
	root -> right = new Node(C);
	root -> right = new Node(D);
	root -> left = new Node(a);
	root -> left = new Node(b);
	root -> left = new Node(c);
	root -> left = new Node(d);
	return root;

	cout << "BinaryTree steps are" \n;
	preorder(root);
	cout<< \n;
}

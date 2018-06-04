#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};
void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);	
	}

}

struct node* create()
{
	int x;
	struct node* p=(struct node*)malloc(sizeof(struct node));
	printf("enter your no. or -1 to terminae");
	scanf("%d",&x);
	if(x==-1)return NULL;
	
	p->data=x;
	p->left=create();
	p->right=create();

	return p;

}



int main()
{
	struct node *root;
	root= create();
		
	inorder(root);
}

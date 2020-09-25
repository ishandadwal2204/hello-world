#include<bits/stdc++.h>

using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};

void pretrev(node * root){
	if(root!=NULL){
		cout<<root->data;
		pretrev(root->left);
		pretrev(root->right);
	}
}
void intrev(node * root){
	if(root!=NULL){
		
		intrev(root->left);
		cout<<root->data;
		intrev(root->right);
	}
}
void posttrev(node * root){
	if(root!=NULL){
		
		posttrev(root->left);
		posttrev(root->right);
		cout<<root->data;
	}
}
void leveltrev(node * root){
	if(root==NULL){
		return;
	}
	queue<node * >q;
	q.push(root);
	while(q.empty()== false){
		node * temp=q.front();
		cout<<temp->data;
		q.pop();
		if(temp->left!= NULL){
			q.push(temp->left);

		} 
		if(temp->right!= NULL){
			q.push(temp->right);
			
		} 
	}

}
node* insert(struct node * root,int x){
	node * newnode=new node();
	newnode->left=NULL;
	newnode->right=NULL;
	newnode->data=x;
	if(root==NULL){
		root=newnode;
	}
	else if(x>root->data){
		root->right=insert(root->right,x);
	}
	else{
		root->left=insert(root->left,x);
	}
	return root;
}

int main(int argc, char const *argv[])
{
	struct node * root = NULL;
	root=insert(root,50);
	root=insert(root,40);
	root=insert(root,30);
	root=insert(root,60);
	root=insert(root,54);
	root=insert(root,45);
	root=insert(root,65);
	pretrev(root);
	cout<<endl;
	posttrev(root);
	cout<<endl;
	intrev(root);
	cout<<endl;
	leveltrev(root);
	return 0;
}

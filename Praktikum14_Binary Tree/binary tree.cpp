#include <iostream>
#include <conio.h>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node*root=NULL;
void addNode(node**root,char fill);
void preOrder(node *root);
void inOrder(node *root);
void postOrder(node *root);
int main(){
	int num;
	cout<<"|=====================|"<<endl;
	cout<<"|                     |"<<endl;
	cout<<"| Posisi Binary Tree: |"<<endl;
	cout<<"|                     |"<<endl;
	cout<<"|=====================|"<<endl;
	cout<<"|                     |"<<endl;
	cout<<"|\t 14           |\n";
	cout<<"|\t /\\           |";
	cout<<endl<<"|\t 6 20         |";
	cout<<endl;
	cout<<"|\t /\\ \\         |";
	cout<<endl;
	cout<<"|\t 3 8 24       |";
	cout<<endl;
	cout<<"|\t /\\           |";
	cout<<endl;
	cout<<"|\t 1 5          |"<<endl;
	cout<<"|                     |"<<endl;
	cout<<"|=====================|"<<endl;
	addNode(&root,num=14);
	addNode(&root->left,num=6);
	addNode(&root->right,num=20);
	addNode(&root->left->left,num=3);
	addNode(&root->left->right,num=8);
	addNode(&root->right->right,num=24);
	addNode(&root->left->left->left,num=1);
	addNode(&root->left->left->right,num=5);
	cout<<endl<<"\n1. PreOrder \t: ";
	preOrder(root);
	cout<<endl<<"2. InOrder \t: ";
	inOrder(root);
	cout<<endl<<"3. PostOrder \t: ";
	postOrder(root);
	getch();
}
void addNode(node**root,char fill){
	if((*root)==NULL){
		node *new2;
		new2= new node;
		new2->data=fill;
		new2->left=NULL;
		new2->right=NULL;
		(*root)=new2;
	}
}
void preOrder(node *root){
	if(root !=NULL){
		cout<<root->data<<"\t";
		preOrder(root->left);
		preOrder(root->right);
	}
}
void inOrder(node *root){
	if(root !=NULL){
		inOrder(root->left);
		cout<<root->data<<"\t";
		inOrder(root->right);
	}
}
void postOrder(node *root){
	if(root !=NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<"\t";
	}
}


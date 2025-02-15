//Binary Tree

//create node
#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int d){
			this->data=d;
			this->left=NULL;
			this->right=NULL;
		}
};
Node* buildTree(Node* root){
	cout<<"ENter the data: ";
	int data;
	cin>>data;
	root =new Node(data);
	if(data== -1){
		return NULL;
	}
	cout<<"Enter the data insert at left"<<data<<endl;
	root->left =buildTree(root->left);
	cout<<"Enter the data insert at right"<<data<<endl;
	root->left =buildTree(root->left);
	return root; 
	
}
int main(){
	Node* root=NULL;
	root =buildTree(root);
	return 0;
}

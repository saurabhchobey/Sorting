#include<iostream>
using namespace std;

struct node{
	
	int data;
	node* rt;
	node* lt;
};
node* newnode(int data1){
	
	node* n=new node();
	n->data=data1;
	n->lt=n->rt=NULL;
	
	
return n;
}
//void display(node* root){
//	
//	if (root==NULL){
//		return ;
//	}
//	display(root->lt);
//	cout<<root->data<<" ";
//	display(root->rt);
//	
//}
int hite(node* root){
	
	if(root==NULL){
		return 0;
	}
	
	return 1+max(hite(root->lt),hite(root->rt));
}
int main(){
	
	node* root=newnode(10);
	root->lt=newnode(17);
	root->lt=newnode(17);
	root->lt=newnode(17);
	root->rt=newnode(15);
	root->rt->rt=newnode(19);
	cout<<hite(root)<<" ";
	
	
	return 0;
	
	
}

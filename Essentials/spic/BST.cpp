#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node*right;//2 3 21 -1 6
		node*left;
		
		node(int key)
		{
			this->data=key;
			this->right=NULL;
			this->left=NULL;
		}
};

class bst{
	public:
		
		node*insert(node*&root,int key)
		{
			if(root==NULL)
			{
				node*newnode=new node(key);
				root=newnode;
			}
			else if(key<=root->data)
			{
				root->left=insert(root->left,key);
			}
			else 
			{
				root->right=insert(root->right,key);
			}
			return root;
	
		}
		
	void print(node*root)
	{
		if(root==NULL)
		{
			return;
		}
		else
		{
		
			print(root->left);
			print(root->right);
				cout<<root->data;
			
		
		}
		
	}	
};

int main()
{
	int k,key;
	cout<<"enter the number of nodes"<<endl;
	cin>>k;
	bst tree;
	node*root=NULL;
	cout<<"enter the value to be entered"<<endl;
	for(int i=0;i<k;i++)
	{
		cin>>key;
		tree.insert(root,key);
		tree.print(root);
	}
	
	return 0;
}


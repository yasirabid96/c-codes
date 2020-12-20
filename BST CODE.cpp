#include<iostream>
using namespace std;
class TreeNode{
	
	public:
		int value;
		TreeNode *left;
		TreeNode *right;
		
	TreeNode()
	{
		value=0;
		left=NULL;
		right=NULL;
		
	}
	
	TreeNode(int v)
	{
		value=v;
		left=NULL;
		right=NULL;
	}
	
			
};

class BST{
	public:
		TreeNode * root;
		BST()
		{
			root=NULL;
		}
		bool inTreeEmpty()
		{
			if(root==NULL)
			{
				return true;
			}
			else
			{
				return false;
				
			}
			
			
		}
		
	void inserNode(TreeNode *new_node)
	{
		if(root==NULL)
		{
		root=new_node;
			cout<<"Inserted as root node"<<endl;
		}
		else
		{
			TreeNode * temp= root;
			while(temp!=NULL)
			{
				if(new_node->value==temp->value)
				{
					cout<<"Value Already Exist"<<endl;
					return;
				}
				else if((new_node->value<temp->value)&&(temp->left==NULL))
				{
					temp->left=new_node;
					cout<<"Value inmserted to the left"<<endl;
					break;
					
				}
				else if((new_node->value<temp->value)){
					temp= temp->left;
					
				}
				
				else if((new_node->value>temp->value)&&(temp->right==NULL))
				{
					temp->right=new_node;
					cout<<"Value inserted to the right"<<endl;
					break;
				}
				else{
					temp=temp->right;
				}
				
			}
		}
		}	
		
		void printPreOrder(TreeNode * r){ // current node, left, right
			if(r==NULL)
			{
				return;
			}
			cout<<r->value<< " ";
			printPreOrder(r->left);
			printPreOrder(r->right);
			
		}
		
		void printInorder(TreeNode *r) // left, node, right
		{
			if(r==NULL)
			{
				return;
			}
			printInorder(r->left);
			cout<<r->value<<" ";
			printInorder(r->right);
			
		}
		
		void printPostOrder(TreeNode *r) // left, right, current
		{
			if(r==NULL)
			{
				return;
			}
			printPostOrder(r->left);
		
			printPostOrder(r->right);
			cout<<r->value<<" ";
		}
		

};


int main()
{
	int op;
	BST obj;
	while(1)
	{
		cout<<"Press 1 to INSERT"<<endl;
		cout<<"Press 2 to Search"<<endl;
		cout<<"Press 3 to Delete"<<endl;
		cin>>op;
		
	TreeNode *t = new TreeNode();
	
	switch(op)
	{
		case 1:
			int val;
			cout<<"Enter value to insert"<<endl;
			cin>>val;
			t->value=val;
			obj.inserNode(t);
		break;
		case 2:
			cout<<"PreOrder"<<endl;
			obj.printPreOrder(obj.root);
			cout<<endl;
			cout<<"In-Order"<<endl;
			obj.printInorder(obj.root);
			cout<<endl;
			cout<<"Post-Order"<<endl;
			obj.printPostOrder(obj.root);
			cout<<endl;
		
		}
		
			

	}
}

#include<iostream>
using namespace std;

class node
{
	node *next;
	int data;
	
	public:
	void insert();
	void show();
	void append();
	void del();
	void update();
};


node *head=NULL;
node *tail=NULL;
node *current=NULL;
node *temp=NULL;
node *c=NULL;
int size=0;

void node::insert()
{
	int a;
	cout<<"Insert Value"<<endl;
	cin>>a;
	
	temp=new node();
	temp->data=a;
	temp->next=NULL;
	size++;
	
	if(head==NULL)
	{
		head=temp;
		tail=temp;
		current=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
	}
	
	
}

void node::show()
{
	cout<<"All Data :"<<endl;
	
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	
}

void node::append()
{
	int val;
	int pos;
	cout<<"Enter value to add"<<endl;
	cin>>val;
	cout<<"Enter position to append"<<endl;
	cin>>pos;
	
	
	
	if(size==0)
	{
		temp=new node();
		temp->next=NULL;
		temp->data=val;
		head=temp;
		tail=temp;
		current=temp;	
		size++;
	}
	else if(pos==0 && size>0)
	{
		temp=new node();
		temp->next=head;
		temp->data=val;
		head=temp;
			size++;
	}
	
	else if(pos>0 && pos<size)
	{
		current=head;
		c=head;
		for(int i=0;i<pos;i++)
		{
			c=current;
			current=current->next;
		}
		
		temp=new node();
		c->next=temp;
		temp->next=current;
		temp->data=val;
			size++;
	}
	else if(pos==size)
	{
		temp=new node();
		temp->next=NULL;
		temp->data=val;
		tail->next=temp;
		tail=tail->next;
			size++;
	}
	else
	{
		cout<<"out of bound"<<endl;
	}
	
	
}

void node::del()
{

	int pos;
	cout<<"Enter position to delete"<<endl;
	cin>>pos;
	current=head;
	if(size==0)
	{
		cout<<"No data to delete"<<endl;
	}
	else if(pos==0 && size>0)
	{
		current=head;
		head=head->next;
		delete current;
	}
	else if(pos>0 && pos<size)
	{
			c=head;
		for(int i=0;i<pos;i++)
		{
			c=current;
			current=current->next;
		}
		c->next=current->next;
		delete current;
		size--;
	}
	else if(pos==size)
	{
	current=head;
	c=current;
	while(current!=NULL)
	{
			c=current;
			current=current->next;
	}
		tail=c;
		tail->next=NULL;
		delete current;
			size--;
	}
	else
	{
		cout<<"out of bound"<<endl;
	}
	
}

void node::update()
{
	
}

int main()
{
	node n;
	int a;
	
	while(1)
	{
		cout<<"Press 1 to insert data"<<endl;
		cout<<"Press 2 to display data"<<endl;
		cout<<"Press 3 to append"<<endl;
		cout<<"Press 4 to delete"<<endl;
		cout<<"Press 5 to update"<<endl;
		cin>>a;
		switch(a){
			case 1:
				n.insert();
				break;
			
			case 2:
				n.show();
				break;
			
			case 3:
				n.append();
			 	break;
				 
			case 4:
				n.del();
				break;
				
			case 5:
				n.update();
				break;
						 		
			
		}
	}
}

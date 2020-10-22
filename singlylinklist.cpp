#include<iostream>
using namespace std;

class node{
	
	int data;
	node *next;
	public:
	void insert();
	void del();
	void show();
	void append();
	void update();
	
};

node *head =NULL;
node *tail =NULL;
node *current =NULL;
node *temp = NULL;
node *c=NULL;
int size=0;

void node::insert()
{
	int val;
	cout<<"Enter Value To Insert"<<endl;
	cin>>val;
	
	temp = new node();
	temp->next=NULL;
	temp->data=val;
	size++;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
		current=temp;
	}
	else{
		tail->next=temp;
		tail=tail->next;
	}
}

void node::show()
{
	if(head==NULL)
	{
		cout<<"NO Data"<<endl;	
	}
	else
	{
	cout<<"All Data"<<endl;
	current=head;
	while(current!=NULL)
	{
		cout<<current->data<<'\t';
		current=current->next;
		}	
		cout<<endl;
	}
	}

void node::append()
{
	int pos;
	int val;
	cout<<"Enter Position To Append Data"<<endl;
	cin>>pos;
	cout<<"Enter Value To Insert Data"<<endl;
	cin>>val;
	
	if(size==0)
	{
		temp=new node();
		temp->next=NULL;
		temp->data=val;
		size++;
		head=temp
		tail=temp;
		current=temp;
	}
	else if(pos==1&&pos<size)
	{
		temp =new node();
		temp->next=head;
		temp->data=val;
		head=temp;
		size++;
	}
	else if(pos>1&&pos<size)
	{ 
		current=head;
		for(int i=1;i<pos;i++)
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
		current=head;
		c=head;
		while(current!=NULL)
		{
			c=current;		
			current=current->next;
	}
		temp=new node();
		temp->data=val;
		temp->next=NULL;
		tail->next=temp;
		tail=tail->next;
		size++;
	}
	else
	{
		cout<<"Out of List"<<endl;
	}
}

void node::del()
{
	int pos;
	
	cout<<"Enter Position to delete"<<endl;
	cin>>pos;
	if(size==0)
	{
		cout<<"No Data To Delete"<<endl;
	}
	if(pos==0&&pos==size)
	{
		temp=head;
		delete temp;
		head=NULL;
		tail-NULL;
		current=NULL:
		temp=NULL:
		size--;
	}
	else if(pos==1&&pos<size)
	{
		temp=head;
		head=head->next;
		delete temp;
		size--;
	}
	else if(pos>1&&pos<size)
	{
		current=head;
		c=current;
		for(int i=1;i<pos;i++)
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
	for(int i=1;i<size;i++)
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
		cout<<"No Position";
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
		cout<<"Press 1 to Insert Data"<<endl;
		cout<<"Press 2 to Display Data"<<endl;
		cout<<"Press 3 to Append Data"<<endl;
		cout<<"Press 4 to Delete Data"<<endl;
		cout<<"Press 5 to Update Data"<<endl;
		cin>>a;
		switch(a)
		{
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

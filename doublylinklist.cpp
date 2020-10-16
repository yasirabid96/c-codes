#include<iostream>
//circular linked list
using namespace std;
class node{
	int data;
	node *next;
	public:
		void insert();
		void show();
		void append();
		void del();
		void update();
};
node *head,*tail,*current,*c,*temp=NULL;
int size=0;
void node::insert(){
	int value;
	cout<<"Enter Value to insert "<<endl;
	cin>>value;
	temp=new node();
	temp->data=value;
	temp->next=head;
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
		tail->next=head;
	}
}
void node::show()
{
	if(size==0)
	{
		cout<<"NO DATA"<<endl;
	}
	else
	{
	
	cout<<"All Data"<<endl;
	current=head;
	if(size==1)
	{
	cout<<"DATA :"<<current->data<<endl;
	}
	else
	{
	
	while(current->next!=head)
	{
		cout<<"DATA :"<<current->data<<endl;
		current=current->next;
	}

		cout<<"DATA :"<<current->data<<endl;
	}
}
}
void node::append(){
	int pos;
	int value;
	cout<<"Enter psotion to append data"<<endl;
	cin>>pos;
	cout<<"Enter value to add"<<endl;
	cin>>value;
	if(size==0)
	{
		temp = new node();
		temp->next=NULL;
		temp->data=value;
		head=temp;
		tail=temp;
		current=temp;
		size++;
	}
	else if(pos==1&&pos<size)
	{
		temp=new node();
		temp->data=value;
		temp->next=head;
		head=temp;
		tail->next=head;
		size++;
	}
	else if(pos>1&&pos<size)
	{
		c=head;
		current=head;
		for(int i=1;i<pos;i++)
		{
			c=current;
			current=current->next;
		}
		temp=new node();
		temp->data=value;
		c->next=temp;
		temp->next=current;
		size++;
	}
	else if(pos==size)
	{
		temp=new node();
		temp->data=value;
		tail->next=temp;
		tail=tail->next;
		tail->next=head;
		size++;
		
	}
}
void node::del(){
	int pos;
	cout<<"Enter psotion to delete data"<<endl;
	cin>>pos;
	if(head==NULL)
	{
		cout<<"No data to delete"<<endl;
	}
	else if(pos==1&&pos==size)
	{
		current=head;
		delete current;
		head=NULL;
		tail=NULL;
		current=NULL;
		size--;
	}
	else if(pos==1&&pos<size)
	{
		current=head;
		head=head->next;
		tail->next=head;
		delete current;
		size--;
	}
	else if(pos>1&&pos<size)
	{
		c=head;
		current=head;
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
		c=head;
		current=head;
		for(int i=1;i<size;i++)
		{
			c=current;
			current=current->next;
		}
		tail=c;
		tail->next=head;
		delete current;
		size--;
	}
}
void node::update(){
	
}

int main()
{
	int a;
	node n;
	while(1)
	{
		cout<<"Press 1 to add data"<<endl;
		cout<<"Press 2 to display data"<<endl;
		cout<<"Press 3 to append data"<<endl;
		cout<<"Press 4 to delete data"<<endl;
		cout<<"Press 5 to update data"<<endl;
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


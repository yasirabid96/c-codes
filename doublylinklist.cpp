#include<iostream>

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


node *current,*head,*tail,*temp,*c=NULL;
int size=0;
void node::insert()
{
	int val;
	cout<<"Enter value to add"<<endl;
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
		c=temp;
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
		tail->next=head;
	}
}


void node::append(){
	
	int pos;
	int value;
	cout<<"Enter position you want to append"<<endl;
	cin>>pos;
	cout<<"Enter Value you want to add"<<endl;
	cin>>value;
	if(size==0)
	{
		temp=new node();
		temp->data=value;
		temp->next=NULL;
		size++;
	}
	else if(pos==1&&pos<size)
	{
		temp=new node();
		temp->data=value;
		temp->next=head;
		head=temp;
		size++;
	}
	else if(pos>1&&pos<size)
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
		temp->data=value;
		size++;
	}
	else if(pos==size)
	{
		c=head;
		current=head;
		for(int i=1;i<size;i++)
		{
			c=current;
			current=current->next;
//			cout<<current->data<<endl;
		}
		temp=new node();
		temp->data=value;
		current->next=temp;
		tail=temp;
		temp->next=head;
		size++;
//		cout<<temp->next->data;
	}
	
}


void node::del()
{
		int pos;
	cout<<"Enter position you want to delete"<<endl;
	cin>>pos;
	if(size==0)
	{
		cout<<"No data to delete"<<endl;
		
	}
	else if(pos==1&&pos==size)
	{
			current=head;
			delete current;
			head=NULL;
			tail=NULL;
			temp=NULL;
			c=NULL;
		//	cout<<head->data;
		size--;
	}
	else if(pos==1&&pos<size)
	{
		current=head;
		head=head->next;
		tail->next=head;
		cout<<head->data<<current->data;
		delete current;
		size--;
	}
	else if(pos>1&&pos<size)
	{
			current=head;
			c=head;
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
//			cout<<current->data<<endl;
		}
		tail=c;
		c->next=head;
		delete current;
		size--;
		
	}
}


void node::update()
{
	
}

void node::show()
{
	cout<<"ALL DATA"<<endl;
	current=head;
	if(head==NULL)
	{
		cout<<"No data to show"<<endl;
	}
	else
	{
	
	while(current->next!=head)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
	cout<<current->data<<endl;
}
}



int main()
{
	node n;
	int a;
	
while(1)
{
	
	cout<<"Press 1 to add"<<endl;
	cout<<"Press 2 to show"<<endl;
	cout<<"Press 3 to append"<<endl;
	cout<<"Press 4 to delete"<<endl;
	cout<<"Press 5 to update"<<endl;
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



#include<iostream>
using namespace std;

class node{
	int data;
	int size=0;
	node *next;
	node *prev;
	node *head,*tail,*current,*c,*temp;
	public:
		node()
		{
			head=NULL;
			tail=NULL;
			current=NULL;
			c=NULL;
			temp=NULL;
		}
	void insert();
	void show();
	void append();
	void del();	
};

void node::insert(){
	int value;
	cout<<"Enter value to insert"<<endl;
	cin>>value;
	temp=new node();
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	size++;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}else{
		tail->next=temp;
		temp->prev=tail;
		tail=tail->next;
	}
}
void node::show(){
	
if(head!=NULL)
{

	cout<<"DATA"<<endl;
	current=head;
	while(current!=NULL)
	{
		cout<<"DATA :"<<current->data<<endl;
		current=current->next;
	}
	
}
else{
	cout<<"NO DATA"<<endl;
}
}

void node::append(){
	int pos;
	int value;
	cout<<"ENter position"<<endl;
	cin>>pos;
	cout<<"ENter value"<<endl;
	cin>>value;
	if(size==0)
	{
		cout<<"Cant append"<<endl;
	}
	else if(pos==1&&pos<=size)
	{
		temp=new node();
		temp->data=value;
		temp->next=head;
		temp->prev=NULL;
		head->prev=temp;
		head=temp;
		size++;
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
		temp=new node();
		temp->data=value;
		c->next=temp;
		temp->prev=c;
		temp->next=current;
		current->prev=temp;
		size++;
	}
	else if(pos==size)
	{
		temp=new node();
		temp->data=value;
		temp->prev=tail;
		temp->next=NULL;
		tail->next=temp;
		tail=tail->next;
		size++;
	}
}
void node::del(){
	
}

int main(){
	int select;
	node n;
	while(1){
		cout<<"1 to insert"<<endl;
		cout<<"2 to show"<<endl;
		cout<<"3 to append"<<endl;
		cout<<"4 to delete"<<endl;
		cin>>select;
		switch(select)
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
		}
	}
}

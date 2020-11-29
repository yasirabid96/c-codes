#include<iostream>
using namespace std;
class stack{
	
	int data;
	int size=0;
	stack *next;
	stack *head,*tail,*current,*c,*temp;
	
	
	
	
	
	public:
		
		stack()
		{
			head=NULL;
			tail=NULL;
			current=NULL;
			c=NULL;
			temp=NULL;
		}
		
		void insert();
		void del();
		void show();
		
};



void stack::insert(){
	int value;
	
	cout<<"Enter value to add to stack"<<endl;
	cin>>value;
	temp = new stack();
	temp->data=value;
	temp->next=NULL;
		size++;
		
	if(size>10)
	{
	cout<<"NO MORE ITEM CAN BE ADDED"<<endl;
}else
{

	if(head==NULL)
	
	{
	 head=temp;
	 tail=temp;
	 
	}
	else
	{
		tail->next=temp;
		tail=tail->next;
	
	}
}
}




void  stack::del(){
	current=head;
	c=head;
	if(size==0)
	{
		cout<<"No more deletion is possible"<<endl;
		
	}
	
	else if(size==1)
	{
		current=head;
		tail=head;
		delete current;
		head=NULL;
		tail=NULL;
		current=NULL;
		size--;
	}
	else
	{
	
	
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
}


void stack::show()
{
	cout<<"All data in stack"<<endl;
	current=head;
	
	while(current!=NULL)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
	
	
	
	
}


int main(){
	
int a;
stack s;

while(1)
{
	cout<<"Enter 1 to insert"<<endl;
	cout<<"Enter 2 to del"<<endl;
	cout<<"Enter 3 to show"<<endl;
	cin>>a;
	
	switch(a)
	{
		case 1:
			s.insert();
			break;
		case 2:
			s.del();
			break;
		case 3:
			s.show();
			break;		
		
	}
	
	
	
}
	
	
}


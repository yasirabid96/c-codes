#include<iostream>
using namespace std;

class queue{
	
		int data;
		queue *next;
		queue *front,*rare,*current,*c,*temp;
		
		
	public:
		queue()
		{
				front=NULL;
				rare=NULL;
				current=NULL;
					c=NULL;
					temp=NULL;
		}
		
		void enque();
		void deque();
		void show();
	
	
};
int size=0;
void queue::enque()
{
	int value;
	cout<<"Enter value to enque"<<endl;
	cin>>value;
	temp=new queue();
	temp->data=value;
	temp->next=NULL;
	size++;
	if(front==NULL)
	{
		front=temp;
		rare=temp;
		
	}
	else
	{
		rare->next=temp;
		rare=rare->next;
	}
}


void queue::deque()

{
	
	if(size==1)
	{
		current=front;
		delete current;
	front =NULL;
	rare =NULL;
	current=NULL;
	size--;
	
	}	
	else if(size>1)
	{
			current=front;
			front=front->next;
			delete current;
			size--;
			
	}
	else if(size==0)
	{
		cout<<"We cannot dequeu anyfurther"<<endl;
		
	}

	
}


void queue::show()
{
		cout<<"All data in the queue"<<endl;
		current =front;
		while(current!=NULL)
		{
			cout<<"DATA"<< current->data<<endl;
			current=current->next;
		}
		
}

int main()
{
	queue n;
	int a;
	
	while(1)
	{
		cout<<"Press 1 to enque data"<<endl;
		cout<<"Press 2 to display queue"<<endl;
		cout<<"Press 3 to deque"<<endl;
	
		cin>>a;
		switch(a){
			case 1:
				n.enque();
				break;
			
			case 2:
				n.show();
				break;

				 
			case 3:
				n.deque();
				break;
	
						 		
			
		}
	}
}




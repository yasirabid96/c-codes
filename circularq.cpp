#include <iostream>
using namespace std;



class CicularQ{
	
	private:
		int front;
		int rear;
		int array[5];
		int itemcount;
		
		
	public:
	
		CicularQ()
		{
			itemcount=0;
			front =-1;
			rear=-1;
			for (int i=0;i<5;i++)
			{
				array[i]=0;
			}
			
			}	
	
	
	bool isEmpty()
	{
		if(front==-1&&rear==-1)
		{
			return true;
			
		}
		else{
			return false;
		}
	}
	
	bool isFull()
	{
		if((rear+1)%5==front)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void enque(int value)
	{
		if(isFull())
		{
			cout<<"Queue is FUll"<<endl;
        }
        else if(isEmpty())
        {
        	rear=0;
        	front =0;
        	array[rear]=value;
		}
		else{
			rear=(rear+1)%5;
			array[rear]=value;
		}
		itemcount++;
	}
	
	int dequeue()
	{
		int x=0;
		if(isEmpty())
		{
			cout<<"Queue is Empty"<<endl;
			return x;
		}
		else if(rear==front)
		{
			x=array[rear];
			rear=-1;
			front=-1;
			itemcount--;
		}
		else{
			cout<<"Front Value"<<front<<endl;
			array[front]=0;
			front = (front+1)%5;
			itemcount--;
			return x;
		}
	}
	void display()
	{
		cout<<"All values in the queue"<<endl;
		for(int i=0;i<5;i++)
		{
			cout<<array[i]<<" "<<endl;
		}
	}
};

int main()
{
	CicularQ q;
	int value,options;
	while(1)
	{
		cout<< "1 to enque"<<endl;
		cout<<" 2 to dequeu"<<endl;
		cout<<" 3 to display"<<endl;
		cin>>options;
		
		switch(options)
		{
			case 1:
				int valuel;
				cout<<"Enter value to insert"<<endl;
				cin>>valuel;
				q.enque(valuel);
				break;
			
			case 2:
				cout<<q.dequeue()<<" VALUE DEQUE"<<endl;
				break;
			
			case 3:
				q.display();
				break;			
		}
		
		
	}
	
}

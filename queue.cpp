#include<iostream>
using namespace std;

class queue{
	
	int font; //head
	int rare; // tail
	int count;
	static const int size=10;
	int array[size];
	public:
		queue()
		{
			font=0;
			rare=-1;
			count=0;
			
		}
		
		bool enque(int);
		int deque();
		void show();
	
	
};


bool queue::enque(int value)
{
	if(rare>=size-1)
	{
			cout<<" Cannot add any further"<<endl;	
			return false;
	}
	else
	{
		array[++rare]=value;
		cout<<"Value inserted into queue"<<endl;
		count++;
		return true;
	}
}


int queue::deque()

{
	if(count<=0)
	{
		cout<<"Cannot dequeu anyfurther"<<endl;
		}	
		else
		{
			int result = array[font++];
			count--;
			return result;
		}
}


void queue::show()
{
	cout<<"All data"<<endl;
	if(cout<=0)
	{
		cout<<"No data"<<endl;
		
	}
	else
	{
		for(int i=font;i<=rare;i++)
		{
			cout<<array[i]<<endl;
		}
	}
}

int main()
{
	queue q;
	
	q.enque(10);
	q.enque(20);
		q.enque(30);
	q.enque(40);
		q.enque(50);
	q.enque(60);
		q.enque(70);
	q.enque(80);
		q.enque(90);
	q.enque(100);
		q.enque(110);
	q.show();
	q.deque();
	q.deque();
	q.deque();
	
	
}



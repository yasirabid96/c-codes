#include<iostream>
using namespace std;

class stack{
	static const int size=10;
	int array[size];
	int top;
	public:
	stack()
	{
		top=-1;
		
	}

	bool push(int);
	int pop();
	void show();	
};


bool stack::push(int x)
{
	if(top>=size-1)
	{
		cout<<"Stack overflow"<<endl;
		return false;
	}
	else
	{
		array[++top]=x;
		cout<<"Stack pushed"<<endl;
		return true;
	}
}


int stack::pop()
{
	if(top<0)
	{
		cout<<"Cannot Pop"<<endl;
		return 0;
	}
	else
	{
		int result= array[top--];
		return result;
		
	}
}

void stack::show()
{
		for(int i=0;i<top;i++)
		{
			cout<<array[i];
			}	
}


int main()
{
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
//	cout<<s.pop();
	s.show();
	
	
}

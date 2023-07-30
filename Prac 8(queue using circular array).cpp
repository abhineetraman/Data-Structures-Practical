#include <iostream>
#include <conio.h>
using namespace std;

class Cqueue
{
	int * carray;
	int size;
	int front;
	int rear;

	public:
		Cqueue(int n)
		{
			size = n;
			carray = new int [size];
			front = -1;
			rear = -1;
		}
	
		bool isempty()
		{
			if (front == -1 && rear == -1)
			return true;
			else return false;
		}

		void enqueue(int value)
		{
			if((rear+1)% size == front)
			cout<<"queue is full"<<endl;
			else 
			if(front == -1)
				front = 0;
	
			rear = (rear+1)%size;
			carray[rear] = value;
		}

		void dequeue()
		{
			if (isempty())
				cout<<"queue is empty"<<endl;
			else if (front == rear)
				front = rear = -1;
			else
				front = (front+1) % size;
		}

		void showfront()
		{
			if(isempty())
				cout<<"queue is empty"<<endl;
			else
				cout<<carray[front]<<endl;
		}

		void display()
		{
			cout<<endl;
			for(int i = 0 ; i<size ; i++)
			cout<<carray[i]<< endl;
		}
};

int main()
{
	int size1 , element;
	char ch1;
	int choice, item;
	cout<<"enter size of queue" <<endl;
	cin>>size1;
	Cqueue a (size1);

	do{
		cout<<"Enter your choice"<<endl;
		cout<<"1.Enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl<<"4.Exit"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:	cout<<"Enter the element to be enqueued"<<endl;
					cin>>item;
					a.enqueue(item);
					break;

			case 2: a.dequeue();
					break;

			case 3: a.display();
				break;
			
			case 4: exit(0);
					break;

			default: cout<<"Wrong choice";    
		}
	}while(true);

	getch();
}

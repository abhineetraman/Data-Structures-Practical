#include<iostream>
using namespace std;

struct node{
		int data;
		node* head=NULL;
		node* next = head;
};

node* insert_beginning(node* &head,int value){
		node *temp=new node();
		temp->data=value;
		temp->next=head;
		head=temp;
}

node* insert_mid(node* & head, int value,int index){
	int count=0;
	node* temp=head;
	while(++count<index){
		temp=temp->next;
	}
	
	node* nd=new node;
	nd->data=value;
	
	nd->next=temp->next;
	temp->next=nd;
}

node* insert_end(node* & head, int value){
	node* temp=head;
	node* nd=new node;
	
	temp=temp->next;
	
	while(temp!=head){
		temp=temp->next;
	}
	
	temp->next=nd;
	nd->data=value;
	nd->next=head;
	
	
}

void delete_beginning(node* head){
	node* temp;
	head->data=head->next->data;
	temp=head->next;
	head->next=head->next->next;
	
	delete temp;
}

void print(node* head){
	node* temp=head;
	cout<<temp->data;
	temp=temp->next;
	
	
	while(temp!=head){
		cout<<"->";
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<"\n";
}

bool search(node* head,int n){
	node* temp=head;
	temp=temp->next;
	
	while(temp!=head){
		if (temp->data==n){
			return true;
		}
		temp=temp->next;
	}
	return false;
}

int main(){
	int a,index,ch,n;
	node *head=new node;
	head->data=5;
	
	do{
		cout<<"Enter your choice: \n1.Insertion at Beginning \n2.Insertion at any index number \n3.Insertion at End \n4.Show Linked List \n5.Search the element \n6.Deletion at beginning \n7.Exit \n";
		cin>>ch;
		switch(ch){
			case 1: cout<<"Enter the data for node";
					cin>>a;
					insert_beginning(head,a);
					break;
			
			case 2:	cout<<"Enter the data for node";
					cin>>a;
					cout<<"Enter the index for the data";
					cin>>index;
					insert_mid(head,a,index);
					break;
			
			case 3: cout<<"Enter the data for node";
					cin>>a;
					insert_end(head,a);
					break;
					
			case 4: print(head);
					break;
			
			case 5: cout<<"Enter element to be search: ";
					cin>>n;
					if (search(head,n))
						cout<<"Element found \n";
					else
						cout<<"Element not found \n";
					break;
			
			case 6: cout<<"Element Deleted \n";
					delete_beginning(head);
					break;
							
			case 7: exit(0);	
		}
	}while(true);

	return 0;
}

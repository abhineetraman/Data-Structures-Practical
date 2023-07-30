#include<iostream>
using namespace std;

struct node{
		int data;
		node* next=NULL;
};

node* insert_beginning(node* & head, int value){
		node *temp=new node;
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
	while(temp->next!=NULL){
		temp=temp->next;
	}
	
	node* nd=new node;
	nd->data=value;
	temp->next=nd;
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
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
		
		if(temp!=NULL)
			cout<<"->";	
	}
	cout<<"\n";
}

bool search(node* head,int n){
	node* temp=head;
	while(temp!=NULL){
		if (temp->data==n){
			return true;
		}
		temp=temp->next;
	}
	return false;
}

void concatinate(node* head,node* head2){
	node* temp=head;
	while(temp!=NULL){
		temp=temp->next;
		if (temp->next!=NULL)
			temp->next=head2;
			break;
	}
}

int main(){
	int a,index,ch,n,hc;
	node *head=new node;
	node* head2=new node;
	head->data=5;
	head2->data=2;
	
	do{
		cout<<"Enter choice for linked list : \n1. First \n2. Second";
		cin>>hc;
		if (hc==1){
			cout<<"Enter your choice: \n1.Insertion at Beginning \n2.Insertion at any index number \n3.Insertion at End \n4.Show Linked List \n5.Search the element \n6.Deletion at beginning \n7.Concatinate linked list \n8.Exit \n";
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
								
				case 7: cout<<"Linked list concatinated";
						concatinate(head,head2);
						cout<<"\n";
						print(head);
						break;
				
				case 8: exit(0);	
			}
		}
		if (hc==2){
			cout<<"Enter your choice: \n1.Insertion at Beginning \n2.Insertion at any index number \n3.Insertion at End \n4.Show Linked List \n5.Search the element \n6.Deletion at beginning \n7.Concatinate Linked list \n8.Exit \n";
		cin>>ch;
		switch(ch){
			case 1: cout<<"Enter the data for node";
					cin>>a;
					insert_beginning(head2,a);
					break;
			
			case 2:	cout<<"Enter the data for node";
					cin>>a;
					cout<<"Enter the index for the data";
					cin>>index;
					insert_mid(head2,a,index);
					break;
			
			case 3: cout<<"Enter the data for node";
					cin>>a;
					insert_end(head2,a);
					break;
					
			case 4: print(head2);
					break;
			
			case 5: cout<<"Enter element to be search: ";
					cin>>n;
					if (search(head2,n))
						cout<<"Element found \n";
					else
						cout<<"Element not found \n";
					break;
			
			case 6: cout<<"Element Deleted \n";
					delete_beginning(head2);
					break;
							
			case 7: cout<<"Linked list concatinated";
					concatinate(head2,head);
					cout<<"\n";
					print(head2);
					break;
						
			case 8:	exit(0);	
			}
		}
	}while(true);

	return 0;
}

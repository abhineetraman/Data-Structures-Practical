//Program to do linear and binary search

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	//Declearing variables
	int size,n;
	bool flag=0;
	
	//setting size of array and putting elements into it
	cout<<"Enter the size of the array";
	cin>>size;
	cout<<"\nEnter elements of array";
	
	int arr[size-1],end=size-1;
	
	//loop to take input the elements of array from user
	for(int i=0;i<=size-1;i++)
		cin>>arr[i];
	
	//Loop to show array to user
	cout<<"The array is : ";
	for(int i=0;i<=size-1;i++)
		cout<<arr[i]<<" ";
	
	//Taking input the element to be searched
	cout<<"\nNumber to be searched";
	cin>>n;
	
	//Loop to search element from the array
	for(int i=0;i<=size-1;i++){
		//If statement to check element in array
		if (arr[i]==n){
			cout<<"Element is at index"<<i;
			flag=1;
		}
	}
	
	if (flag==0){
		cout<<-1;	
	}
	
	return 0;
}

//***************End of Program**************

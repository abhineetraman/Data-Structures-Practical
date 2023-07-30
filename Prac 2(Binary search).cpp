#include<iostream>
#include<stdlib.h>
using namespace std;

//creating function bubble_sort

template <class T>
void bubble_sort(T arr[],int size){
	for(int step=0;step<(size-1);++step){
		for(int i=0;i<(size-1);++i){
			if(arr[i]>arr[i+1]){
				T temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
}

int main(){
	
	//Declearing variables
	int size,n;
	int start=0,choice;
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
	
	if (size==1 and arr[0]==n)
		cout<<"Hurray!!! Element found at"<<0<<endl;
	else if (size==2 and (arr[0]==n or arr[1]==n))
		cout<<"Hurray!!! Element found"<<endl;
	else if (size>2){
		bubble_sort(arr,size);
		while(start<=end){
			int mid=(int)(start+end)/2;
				if (arr[mid]==n){
					cout<<"Hurray!!! Element found at "<<mid<<endl;
					break;
				}
				
				else if (arr[mid]>n){
					end=mid-1;
				}
				
				else if (arr[mid]<n){
					start=mid+1;
				}
			}
		}
		
	else {
		cout<<-1;
	}
	
	return 0;
}


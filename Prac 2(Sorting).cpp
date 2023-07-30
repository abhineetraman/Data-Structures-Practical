//This is the program is for sorting method

#include<iostream>
using namespace std;

void swap(int *xp, int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

template <class T>

//Function for Insertion sort
void insertion_sort(T arr[],int size){
	for(int i=1,j;i<size;i++){
		T temp=arr[i];
		for(j=i;j>0 && temp<arr[j-1];j--){
				arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}
}

template <class T>

//Function for selection sort
void selection_sort(T arr[],int size){
	T temp;
	for(int i=0;i<size-1;i++){
		T min=i;
		for(int j=i+1;j<size;j++){
			if (arr[j]<arr[min])
				min=j;
			swap(&arr[min],&arr[i]);
		}
	}
}

template <class T>

//creation function bubble_sort
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

template <class T>

//Creating function to show the array
void print_array(T arr[],int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size,choice;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"\nEnter elements of array: ";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	print_array(arr,size);
	
	cout<<"\nEnter the way in which it is sorted \n1. Insertion Sort \n2. Selection Sort \n3. Bubble Sort \n4. Exit \n";
	cin>>choice;
	
	switch(choice){
		case 1: insertion_sort(arr,size);
				cout<<endl;
				print_array(arr,size);
				break;
		
		case 2:	selection_sort(arr,size);
				cout<<endl;
				print_array(arr,size);
				break;
		
		case 3:	bubble_sort(arr,size);
				cout<<endl;
				print_array(arr,size);
				break;
		
		case 4: exit(0);
	}

return 0;
}

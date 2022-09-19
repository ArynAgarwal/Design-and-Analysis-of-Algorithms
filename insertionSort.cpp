#include<iostream>
using namespace std;

void InsertionSort(int *arr, int n){
	int key,j;
	int count=0;
	int shifts=0;
	for(int i=0;i<n;i++){
		key=arr[i];
		j= i-1;
		count=count+1;
		while(j>=0 && arr[j]> key){
			arr[j+1]=arr[j];
			j--;
			shifts=shifts+1;
		}
		arr[j+1]=key;
	}
	cout<<"The no. of comparisons are: "<< count << endl;
	cout<<"The no. of shifts are: "<< shifts << endl;
}

int main(){
	int n;
	cout<< "Enter the size of array: ";
	cin>>n;
	int array[n];
	cout<< "Enter the elements of the array: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	InsertionSort(array,n);
	cout<< "Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<< array[i]<< "," << " ";
	}
}

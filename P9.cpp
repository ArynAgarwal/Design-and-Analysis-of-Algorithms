#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp= *a;
	*a=*b;
	*b=temp;}
	
void selectionSort(int arr[], int n){
	int i,j,min,count =0;
	for(i=0;i<n-1;i++){
		count++;
		min=i;
		for(j=i+1;j<n;j++)
		   if(arr[j]<arr[min])
		   min=j;
		swap(&arr[min], &arr[i]);
		
	}
	cout<<endl<<"Comparision no: "<<count<<endl;   
}

void printArray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}		

int main(){
	cout<<"Aryan Agarwal"<<endl<<"Section-F"<<endl<<"20021148"<<endl;
	cout<<"PROGRAM NO:09"<<endl;
	int arr[]={64, 25, 12, 22, 11};
	int n=5;
	cout<<endl<<"Before sorting array is: ";
	printArray(arr, n);
	selectionSort(arr, n);
	cout<<endl<<"After sorting array is: ";
	printArray(arr, n);
	return 0;
}

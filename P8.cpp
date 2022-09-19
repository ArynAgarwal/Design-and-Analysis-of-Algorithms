#include<iostream>
using namespace std;

int main(){
	cout<<"Aryan Agarwal"<<endl<<"Section-F"<<endl<<"20021148"<<endl;
	cout<<"PROGRAM NO:08"<<endl;
	int arr[]={15,7,2,10,1,4,11};
	cout<<"Input array is: ";
	for(int i=0;i<6;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	int count=0;
	for(int k=1;k<6;k++){
		count++;
		int temp=arr[k];
		int j=k-1;
		while(j>=0 && temp<=arr[j]){
			arr[j+1]=arr[j];
			j--;
			
		}
		arr[j+1]=temp;
	}
	cout<<"Comparision No.: "<<count<<endl;
	cout<<"Sorted array is: ";
	for(int i=0;i<6;i++){
		cout<<arr[i]<<"\t";
		
	}
}

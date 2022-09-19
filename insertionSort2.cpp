#include<iostream>
using namespace std;
int main()
{
	int n,swap=0,comp=0;
	cout<<"Aryan Agarwal"<<endl<<"20021148"<<endl<<"Section-F"<<endl;
	cout<<"Enter the number of elements in an array:"<<"\n";
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++)
	cin>>arr[i];
	int min,temp;
	for(int i=00; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			comp++;
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		swap++;
	}
	for(int i=0; i<n; i++)
	cout<<arr[i]<<"  "<<"\n";
	cout<<"comparisions ="<<comp<<"\n";
	cout<<"Swaps ="<<swap<<"\n";
}

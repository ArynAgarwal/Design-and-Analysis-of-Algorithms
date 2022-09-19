#include<iostream>
using namespace std;
int count(int arr[],int n,int key)
{    
     int count=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
           if(arr[i]-arr[j]==key)
           {
               count++;
           }
         }
     }
    return count;
}
int main()
{
	cout<<"Aryan Agarwal"<<endl<<"Section-F"<<endl<<"20021148"<<endl;
     int n,key;
     cout<<"Enter the number of elements:";
     cin>>n;
     int arr[n];
     cout<<"Enter the elements";
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     cout<<"Enter the element to search";
     cin>>key;
     cout<<"Number of pairs where difference of elements is equal to key:"<<count(arr,n,key);
}

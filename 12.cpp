#include<iostream>
#include<algorithm>
using namespace std;
int partition(int *arr,int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
            
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
int quickselect(int *arr,int l,int r,int k)
{
    if(k>0&&k<=r-l+1)
    {
        int p=partition(arr,l,r);
        if(p-l==k-1)
          return arr[p];
        if(p-l>k-1)
          return quickselect(arr,l,p-1,k);

          return quickselect(arr,p+1,r,k-p+l-1);
    }
return INT_MAX;
}
int main()
{
 int t;
 cout<<"enter no. of test"<<endl;
 cin>>t;
 while(t!=0)
 {
 int n;
 cout<<"enter the size of array"<<endl;
 cin>>n;
 int arr[n];
 int j;
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 int k;
 cout<<"enter key"<<endl;
 cin>>k;
   int s=quickselect(arr,0,n-1,k);
   cout<<s<<endl;
   t--;
 }
}


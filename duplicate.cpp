
#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int n){
	int i, j, l=0;
	int a[n];
	for(i=0;i<n;i++){
		if(a[i]==1){
			continue;
		}
		int count=0;
		for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				a[j]=1;
				++count;
				break;
			}
		}
		if((count>0) && (l<2)){
			++l;
			cout<<"duplicate elements present"<<endl;
			cout<<"Elements are:"<<arr[i]<<endl;
		}
	}
}

int main(){
	cout<<"Aryan Agarwal"<<endl<<"Section-F"<<endl<<"20021148"<<endl;
	cout<<"PROGRAM NO:10"<<endl;
	int arr[]= {4, 2, 5, 2, 3,  4, 4, 1, };
	int n=8;
	duplicate(arr, n);
	return 0;
}

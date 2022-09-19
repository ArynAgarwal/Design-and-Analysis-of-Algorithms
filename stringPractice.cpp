#include<iostream>
#include<string>
using namespace std;

int main(){
	string str1 = "Hello world ";
	string str2 = "Aryan Agrwal ";
	str1.insert(6, str2);
	cout<<str1<<endl;
	cout<<str1.length()<<endl;
	cout<<str1.size()<<endl;
	
	string rev;
	cout<<rev.length();
	auto it = rev.begin();
	for(int i=0;i<4;i++){
		//rev.insert(it, str2[i]);
		//it = it+1;
		rev.push_back(str2[i]);
//		rev[i]=str2[str2.length()-1-i];
		cout<<rev[i]<<"  : and now its length is = "<< rev.length()<<endl;
	}
}

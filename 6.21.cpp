#include<iostream>
using namespace std;
multiple(int b){
	if(b%3==0)
	{
		cout<<"TRUE"<<endl;
	}
	else
	{
		cout<<"FALSE";
	}
}
int main(){
	int a;
	cout<<"Enter a Integer: "<<endl;
	cin>>a;
	multiple(a);
	}


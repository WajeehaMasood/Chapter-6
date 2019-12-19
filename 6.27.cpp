#include<iostream>
using namespace std;
minimum(float a, float b, float c){
	int minimum=0;
	if (a<b && a<c){
		minimum=a;
		cout<<" Minimum is "<<a<<endl;
	}
	else if(b<a && b<c){
		minimum=b;
		cout<<" Minimum is "<<b<<endl;
	}
	else{
		minimum=c;
		cout<<" Minimum is "<<c<<endl;
	}
}
int main(){
	float p,q,r;
	cout<<"Enter number 1: "<<endl;
	cin>>p;
	cout<<"Enter number 2: "<<endl;
	cin>>q;
	cout<<"Enter number 3: "<<endl;
	cin>>r;
	minimum(p,q,r);
}


#include<iostream>
using namespace std;
reverse(int n){
	 int reversedNumber = 0, remainder;
	  while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number is: " << reversedNumber;
	
}
int main(){
    int a;
    cout << "Enter an integer: ";
    cin >> a;
  reverse(a);
}



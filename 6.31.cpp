#include<iostream>
using namespace std;
gcd(int a, int b) { 
   if (b == 0) 
      return a; 
  
   return gcd(b, a % b);   
} 
int main() { 
int c,d;
   cout<<"Enter a number: "<<endl;
   cin>>c;
   cout<<"Enter a number: "<<endl;
   cin>>d; 
 cout<<"GCD of "<< c <<" and "<< d <<" is: "<< gcd(c, d); 
}   


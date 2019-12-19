#include <iostream>
using namespace std;
 reverse(int b{	
 	int reverseNum=0;
 
	while (b > 0)
	{
		reverseNum += (b%10);
		reverseNum *= 10;
		b /= 10;
	}
	reverseNum /= 10;
 
	while (reverseNum != 0)
	{
		cout << reverseNum%10 << " ";
		reverseNum /= 10;
	}
 }
int main()
{
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	reverse(number);
}


//Program to determine if a number is odd or even
#include <iostream>
using namespace std;

int main()
{
  	int n = 0;
	int remainder = 0;
	
	cout << "Enter a number: " ;
	cin >> n;
	remainder = (n%2);
	
	if (remainder == 0) 
	{
		cout << "The number is even!";
	} else 
		{
			cout << "The number is odd!";
		}
	return 0;
}

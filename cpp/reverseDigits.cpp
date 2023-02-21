#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int number,rem;
	cin>> number;
	int n=0;
	while (n<=4)
{ 
		rem=number%10;
		rem=rem*pow(10,n)+rem;
		number = number/10;
		n++;
}
	cout<<rem;
}
	


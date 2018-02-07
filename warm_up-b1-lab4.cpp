#include <iostream>
#include <math.h>
using namespace std;

double testsqrt(double);

int main()
{
	char count;
	double n;

	do{
		cout<<"Enter a value: ";
		cin>>n;
		cout<<"Square root of "<<n<<" is "<<testsqrt(n)<<endl;
		cout<<"Continue? (y/n): ";
		cin>>count;
		cin.ignore();
	}
	while(count != 'n');
	return 0;
}

double testsqrt(double x){
	return sqrt(x);
}

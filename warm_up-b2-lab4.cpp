//A Leap Year program.
#include <iostream>
using namespace std;

bool isLeapYear(int year);

int main()
{
	int y;
	char c;
	do{
		cout<<"Enter a year value: ";
		cin>>y;
		if(isLeapYear(y))
			cout<<y<<" is a leap year.\n";
		else
			cout<<y<<" is not a leap year.\n";
		cout<<"Continue? (y/n): ";cin>>c;
	}
	while(c!='n');
	return 0;
}

bool isLeapYear(int year)
{
	if ((year%4==0 && year%100!=0) or (year%40==0))
		return true;
	else
		return false;
	return true;
}
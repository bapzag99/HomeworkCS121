#include <iostream>
using namespace std;

//Ham tra ve so ngay cua thang
bool isLeapYear(int x);
int last_day(int &month, int &year);

int main()
{	
	char chon;
	int month,year;
	do{
	cout<<"enter month and year: ";cin>>month>>year;
	last_day(month,year);
	cout<<"continue? (y/n): ";cin>>chon;
	}
	while (chon!='n');
	return 0;
}

bool isLeapYear(int x)
{
	if ((x%4==0&&x%100!=0)||(x%400==0)){
		return true;
	}
	else{
		return false;
	}
	return true;
}

int last_day(int &month, int &year)
{
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				cout<<"days in month: 31\n";
				break;
			}
			case 4: case 6: case 9: case 11:
			{
				cout<<"days in month: 30\n";
				break;
			} 
			default:
			{
				if (isLeapYear(year)){
					cout<<"days in month: 29\n";
					break;
				}
				else{
					cout<<"days in month: 28\n";
					break;
				}
			}
		}
}
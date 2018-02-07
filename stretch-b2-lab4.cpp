#include <iostream>
using namespace std;

//Chuong trinh tra ve ngay tiep theo
bool isLeapYear(int x);
int last_day(int &month,int &day, int &year);

int main()
{	
	char chon;
	int day1,day,month,year;
	do{
	cout<<"enter a date as mm dd yyyy: ";cin>>month>>day1>>year;
	last_day(month,day,year);
	if (day1 == day){
		if(month==12){
			day1 = 1;
			month = 1;
			year+=1;
		}
		else{
			day1 = 1;
			month +=1;
		}
	}
	else {
		day1 +=1;
	}

	cout<<"next day is: "<<month<<" "<<day1<<" "<<year<<endl;
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

int last_day(int &month,int &day, int &year)
{
		switch(month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				day = 31;
				break;
			}
			case 4: case 6: case 9: case 11:
			{
				day = 30;
				break;
			} 
			default:
			{
				if (isLeapYear(year)){
					day = 29;
					break;
				}
				else{
					day = 28;
					break;
				}
			}
		}
}
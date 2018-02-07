#include <iostream>
using namespace std;
//Chuong trinh tim uoc chung lon nhat cua 2 so nguyen.
int GCD(int a,int b);

int main()
{
	char chon;
	int a,b;
	do{
	cout<<"enter two interger values: ";
	cin>>a>>b;
	cout<<"greatest common divisor is: "<<GCD(a,b)<<endl;
	cout<<"continue? (y/n): ";cin>>chon;
	}
	while (chon!='n');
	return 0;
}

int GCD(int a,int b)
{
	if(b==0)
		return a;
	else
		return GCD(b,a%b);
}
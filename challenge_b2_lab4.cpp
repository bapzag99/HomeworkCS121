#include <iostream>
#include <math.h>
using namespace std;
// Chuong trinh RSA Encryption
int GCD(int a,int b);//ham tim UCLN
bool check_epq(int e,int p,int q);
int char_to_number(char kitu);//ham chuyen ky tu thanh so nguyen trong bang 26 chu cai
int encode(int a, int e, int n);

int main()
{
	char chon,a,b,c,d;
	int e,p,q;
	do{
		cout<<"Input e, p, and q : ";
		cin>>e>>p>>q;
		int n=p*q;
		if (check_epq(e,p,q))
		{
			cout<<"Input four upper case letters : ";
			cin>>a>>b>>c>>d;
			cout<<"The encoding of "<<a<<b<<c<<d<<" is ";
			cout<<encode(a,e,n)<<" ";
			cout<<encode(b,e,n)<<" ";
			cout<<encode(c,e,n)<<" ";
			cout<<encode(d,e,n)<<endl;
		}
		else{
			cout<<"GCD of e and (p-1)*(q-1) is not 1\n";
		}
		cout<<"Continue? (y/n): ";
		cin>>chon;
	}
	while (chon!='n');
	return 0;
}
//==================================================================================
int GCD(int a, int b)
{
	if (b==0) return a;
	else return GCD(b,a%b);
}
//==================================================================================
bool check_epq(int e, int p, int q)
{
	if (GCD(e,(p-1)*(q-1))==1) return true;
	else return false;
}
//==================================================================================
int char_to_number(char kitu)
{
	return (int(kitu)-65+1);//Ky tu A trong bang ASCII co so hieu la 65.
}
//==================================================================================
int encode(int a, int e, int n)
{
	return ((int)(pow(char_to_number(a), e)) % n);
}
//==================================================================================
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int promien,kat;

int main() {
	cout<<"Wpisz promien R: "<<endl;
	cin>>promien;
	cout<<"Wpisz kat alfa (w stopniach): "<<endl;
	cin>>kat;
	int rad=(M_PI*kat)/180;
	int wyn=((promien*promien)/2)*(((M_PI*kat)/180)-sin(rad));
	cout<<wyn<<endl;
	return 0;
}
#include <iostream>
using namespace std;
char kat;
int lg,nad,zarobek;

int main() {
	int i=1;
	while(i>0){
	cout<<"Kategoria zaszeregowania    "<<"Stawka [zl/godz.]"<<endl;
	cout<<"	A "<<"				15"<<endl;
	cout<<"	B "<<"				25"<<endl;
	cout<<"	C "<<"				30"<<endl;
	cout<<"	D "<<"				35"<<endl<<endl;
	cout<<"Wpisz kategorie zaszeregowania:"<<endl;
	cin>>kat;
	cout<<"Wpisz liczbe godzin:"<<endl;
	cin>>lg;
	nad=0;
	zarobek=0;
	if(lg>40){	
		nad=lg-40;
		lg=lg-40;
	}
	switch(kat){
		case 'A':
			int stawka=15;
			if(nad==0){
				zarobek=(lg*stawka);
			}
			else{
				zarobek=(lg*stawka)+(nad*stawka*2);
			}
		case 'B':
			int stawka=25;
			if(nad==0){
				zarobek=(lg*stawka);
			}
			else{
				zarobek=(lg*stawka)+(nad*stawka*2);
			}
		case 'C':
			int stawka=30;
			if(nad==0){
				zarobek=(lg*stawka);
			}
			else{
				zarobek=(lg*stawka)+(nad*stawka*2);
			}
		case 'D':
			int stawka=35;
			if(nad==0){
				zarobek=(lg*stawka);
			}
			else{
				zarobek=(lg*stawka)+(nad*stawka*2);
			}
		default:
			cout<<"Nie wybrano zadnej kategorii"<<endl;
	}
	if(zarobek<=700){
		int netto=zarobek*85/100;
		cout<<"Zarobek netto"<<netto<<endl;
	}
	else if(zarobek>=701 && zarobek<=1200){
		int netto=zarobek*8/10;
		cout<<"Zarobek netto"<<netto<<endl;
	}
	else if(zarobek>1200){
		int netto=zarobek*75/100;
		cout<<"Zarobek netto"<<netto<<endl;
	}
	else{
		cout<<"Nie wybrano zadnej kategorii"<<endl;
	}
	return 0;
	}
	
	
	
}
#include <iostream>
using namespace std;


int main() {
	cout<<"Kategoria zaszeregowania    "<<"Stawka [zl/godz.]"<<endl;
	cout<<"	A "<<"				15"<<endl;
	cout<<"	B "<<"				25"<<endl;
	cout<<"	C "<<"				30"<<endl;
	cout<<"	D "<<"				35"<<endl<<endl;
	cout<<"By zakonczyc wpisz inny znak"<<endl<<endl;
	
	for(;;){
		char kat;
		int lg,nad,nadk,stawka,i;
		float netto,brutto,podatek;	
		cout<<"Wpisz kategorie zaszeregowania"<<endl;
		cin>>kat;
		cout<<"Wpisz liczbe godzin:"<<endl;
		cin>>lg;
		nad=0;
		if(lg>40){	
			nad=lg-40;
			lg=lg-40;
		}
		switch(kat){
			case 'A':
				stawka=15;
				break;
			case 'B':
				stawka=25;
				break;
			case 'C':
				stawka=30;
				break;
			case 'D':
				stawka=35;
				break;
			default:
				return 0;
		}
		nadk=nad*(stawka*2);
		brutto=(stawka*lg)+nadk;
		if(brutto<=700){
			podatek=0.15;

		}
		else if(brutto>700 && brutto<=1200){
			podatek=0.2;

		}
		else{
			podatek=0.25;
		}
		netto=brutto-(brutto*podatek);
		cout<<"Zarobek netto wynosi: "<<netto<<endl;
	}
		
	return 0;
}
	

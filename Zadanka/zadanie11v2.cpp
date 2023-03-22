#include <iostream>
using namespace std;
char kat;
int lg,nad,brutto,nadk,stawka,netto,podatek,i;

int main() {
	i=1;
	cout<<"Kategoria zaszeregowania    "<<"Stawka [zl/godz.]"<<endl;
	cout<<"	A "<<"				15"<<endl;
	cout<<"	B "<<"				25"<<endl;
	cout<<"	C "<<"				30"<<endl;
	cout<<"	D "<<"				35"<<endl<<endl;
	cout<<"By zakonczyc wpisz inny znak"<<endl<<endl;
	
	while(i!=0){
		
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
				nadk=nad*(stawka*2);
				brutto=(stawka*lg)+nadk;
				cout<<brutto<<endl;
				i=1;
				break;
			case 'B':
				stawka=25;
				nadk=nad*(stawka*2);
				brutto=(stawka*lg)+nadk;
				cout<<brutto<<endl;
				i=1;
				break;
			case 'C':
				stawka=30;
				nadk=nad*(stawka*2);
				brutto=(stawka*lg)+nadk;
				cout<<brutto<<endl;
				i=1;
				break;
			case 'D':
				stawka=35;
				nadk=nad*(stawka*2);
				brutto=(stawka*lg)+nadk;
				cout<<brutto<<endl;
				i=1;
				break;
			default:
				i=0;
				break;
		}
		if(brutto<=700){
			podatek=0,15;
			netto=brutto/podatek;
			cout<<"Zarobek netto wynosi: "<<netto<<endl;
		}
		else if(brutto>700 && brutto<=1200){
			podatek=0,2;
			netto=brutto/podatek;
			cout<<"Zarobek netto wynosi: "<<netto<<endl;
		}
		else if(brutto>1200){
			podatek=0,25;
			netto=brutto/podatek;
			cout<<"Zarobek netto wynosi: "<<netto<<endl;
		}
		else{
			cout<<"Prosze jeszcze raz"<<endl;
		}
	}
		
	return 0;
	}
	

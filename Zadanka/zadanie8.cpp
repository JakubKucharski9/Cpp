#include <iostream>
using namespace std;
int a,nr,w1,w2;


int main() {
	int i=1;
	while(i>0){
		cout<<"Wpisz nr operacji"<<endl<<endl;
		cout<<"1 - Dodawanie"<<endl;
		cout<<"2 - Odejmowanie"<<endl;
		cout<<"3 - Mnozenie"<<endl;
		cout<<"4 - Dzielenie"<<endl;
		cout<<"0 - Koniec pracy"<<endl<<endl;
		cin>>nr;
		if(nr==1){
			cout<<"Wybrales Dodawanie"<<endl<<endl;
			cout<<"Wpisz pierwsza wartosc"<<endl;
			cin>>w1;
			cout<<"Wpisz druga wartosc"<<endl;
			cin>>w2;
			int w=w1+w2;
			cout<<"Wynik to: "<<w<<endl<<endl;
		}
		else if(nr==2){
			cout<<"Wybrales Odejmowanie"<<endl<<endl;
			cout<<"Wpisz pierwsza wartosc"<<endl;
			cin>>w1;
			cout<<"Wpisz druga wartosc"<<endl;
			cin>>w2;
			int w=w1-w2;
			cout<<"Wynik to: "<<w<<endl<<endl;
		}
		else if(nr==3){
			cout<<"Wybrales Mnozenie"<<endl<<endl;
			cout<<"Wpisz pierwsza wartosc"<<endl;
			cin>>w1;
			cout<<"Wpisz druga wartosc"<<endl;
			cin>>w2;
			int w=w1*w2;
			cout<<"Wynik to: "<<w<<endl<<endl;
		}
		else if(nr==4){
			cout<<"Wybrales Dzielenie"<<endl<<endl;
			cout<<"Wpisz pierwsza wartosc"<<endl;
			cin>>w1;
			cout<<"Wpisz druga wartosc"<<endl;
			cin>>w2;
			if(w2==0){
				cout<<"Nie wolno dzielic przez 0"<<endl<<endl;
			}
			else{
				int w=w1/w2;
				cout<<"Wynik to: "<<w<<endl<<endl;	
			}
		}
		else if(nr==0){
			cout<<"Koniec pracy"<<endl;
			i=0;
		}
		else{
			cout<<"Wybierz liczbe z zakresu"<<endl;
		}
	}
}
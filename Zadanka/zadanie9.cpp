#include <iostream>
#include <ctime>
using namespace std;
int i,liczba,od;


int main() {
	i=1;
	srand ((int) time(NULL));
	int nWylosowana = rand() %100 +1;
	while(i>0){
		cout<<"Wpisz liczbe z zakresu 1-100"<<endl;
		cin>>liczba;
		if(liczba==nWylosowana){
			i=0;
		}
		else if(liczba>nWylosowana){
			cout<<"Wartosc za duza"<<endl;
		}
		else if(liczba<nWylosowana){
			cout<<"Wartosc za mala"<<endl;
		}
		
	}
	cout<<"Brawo! Zgadles liczbe "<<nWylosowana<<endl;
	return 0;
}
	
#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
using namespace std;
string w;


int main() {
	char tab[30];
	char tab2[30];
	cout<<"Wpisz wyraz: ";
	cin>>w;
	int d=w.length();
	for(int i=0;i<d;i++){
		tab[i]=w[i];
	}
	for(int i=0;i<d;i++){
		tab2[d-i-1]=w[i];
	}
	for(int i=0;i<d;i++){
		if(tab[i]!=tab2[i]){
			cout<<"Nie jest Palindromem"<<endl;
			return 0;
		}
	}
	cout<<"Jest Palindromem";
	return 0;
}

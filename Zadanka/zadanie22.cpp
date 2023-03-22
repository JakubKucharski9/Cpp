#include <iostream>
#include <string>
using namespace std;
int war;

int main(){
	int tab[100];
	cout<<"Ile danych chcesz wpisac? ";
	cin>>war;
	cout<<"Wpisz wartosci: "<<endl;
	for(int i=0; i<war;i++){
		int x;
		cin>>x;
		tab[i]=x;
	}
	int n=war;
	while(n>1){
		for(int i=0;i<n-1;i++){
			if(tab[i]>tab[i+1]){
				int w=tab[i+1];
				tab[i+1]=tab[i];
				tab[i]=w;
			}	
		}
		n=n-1;
	}
	cout<<endl;
	
	for(int i=0;i<war;i++){
		cout<<tab[i]<<" ";	
		
	}
	
return 0;
}

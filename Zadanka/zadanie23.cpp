#include <iostream>
#include <string>
using namespace std;
int a,b,c,d;

int main(){
	int tab1[100][100];
	int tab2[100][100];
	int tab3[100][100];
	cout<<"Wpisz wartosc a: ";
	cin>>a;
	cout<<"Wpisz wartosc b: ";
	cin>>b;
	cout<<"Wpisz wartosc c: ";
	cin>>c;
	cout<<"Wpisz wartosc d: ";
	cin>>d;
	
	
	if(a!=c || b!=d){
		cout<<"BLAD";
		return 0;
	}
	
	cout<<"Wpisz liczby do pierwszej tablicy"<<endl;
	
	for(int ai=0;ai<a;ai++){
		for(int bi=0;bi<b;bi++){
			int f;
			cin>>f;
			tab1[ai][bi]=f;
		}
	}
	cout<<"Wpisz liczby do drugiej tablicy"<<endl;
	for(int ci=0;ci<c;ci++){
		for(int di=0;di<d;di++){
			int f;
			cin>>f;
			tab2[ci][di]=f;
		}
	}
	for(int o=0;o<a;o++){
		for(int p=0;p<b;p++){
			int w=tab1[o][p]+tab2[o][p];
			tab3[o][p]=w;
		}
	}
	
	
	for(int ai=0;ai<a;ai++){
		for(int bi=0;bi<b;bi++){
			cout<<tab3[ai][bi]<<" ";
		}
		cout<<endl;
	}

return 0;
}

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void dec_to_n(int a,int n){
	int x=0;
	char tab[100];
	while(a!=0){
		int r=a%n;
		if(r>9){
			r=r+55;
			char w=(char) r;
			tab[x]=w;
		}
		else{
			r=r+48;
			char w=(char) r;
			tab[x]=w;
		}
		a=a/n;
		x+=1;
	}
	for(int i=x-1;i>=0;i--){
		cout<<tab[i];
	}
}
int main(){
	cout<<"Wpisz wartosc a: "; int a; cin>>a;
	cout<<"Wpisz wartosc n: "; int n; cin>>n;
	if(n>33){
		cout<<"BLAD";
	}
	else{
		dec_to_n(a,n);	
	}
	
}

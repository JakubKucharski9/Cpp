#include <iostream>
using namespace std;
int a,b;

int main() {	
	cout<<"Wpisz ilosc zetonow a: "<<endl;
	cin>>a;
	cout<<"Wpisz ilosc zetonow b: "<<endl;
	cin>>b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	int w=a+b;
	cout<<w;
	return 0;
	}
	

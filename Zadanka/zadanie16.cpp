#include <iostream>
using namespace std;
char znak;
int a,o,b;

int main() {	
	cout<<"Wpisz liczbe a: "<<endl;
	cin>>a;
	cout<<"Wpisz liczbe b: "<<endl;
	cin>>b;
	cout<<"Wpisz znak: "<<endl;
	cin>>znak;
	cout<<endl;
	o=0;

	for(b;b>0;b--){
		int c=0;
		
		for(c;c<a;c++){
			cout<<znak;
		}
		cout<<endl;
	}

	return 0;
	
	}
	

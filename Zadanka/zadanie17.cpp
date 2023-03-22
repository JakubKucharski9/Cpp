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
	int bb=b;
	for(bb;bb>0;bb--){
		int c=0;
		if(bb==b || bb==1){
			for(c;c<a;c++){
			cout<<znak;
			}
		}
		else{
			cout<<znak;
			for(c;c<a-2;c++){
			cout<<" ";
			}
			cout<<znak;
		
		}
		
		cout<<endl;
	}

	return 0;
	
	}
	

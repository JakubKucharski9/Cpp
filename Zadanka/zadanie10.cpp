#include <iostream>
using namespace std;
int a,b,i,nwp;


int main() {
	cout<<"Wpisz a"<<endl;
	cin>>a;
	cout<<"Wpisz b"<<endl;
	cin>>b;
	if(a>0 && b>0){
		int a1=a;
		int b1=b;
		i=1;
		while(i>0){
			if(a1!=b1){
				if(a1>b1){
					a1=a1-b1;
				}
				else{
					b1=b1-a1;
				}
			}
			else{
				nwp=a1;
				cout<<"Najwiekszy wspolny podzielnik jest rowny "<<nwp<<endl;
				i=0;
			}
			}
		}
	
	else{
		cout<<"Brak rozwiazan"<<endl;
	}
	return 0;
}
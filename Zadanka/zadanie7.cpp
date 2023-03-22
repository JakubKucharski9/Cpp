#include <iostream>
using namespace std;
int a,b,nww;


int main() {
	cout<<"Wczytaj a"<<endl;
	cin>>a;
	cout<<"Wczytaj b"<<endl;
	cin>>b;
	if(a>0 && b>0){
		int a1=a;
		int b1=b;
		while(a1!=b1){
			if(a1>b1){
				b1=b1+b;
			}
			else{
				a1=a1+a;
			}
		nww=a1;
		}
	}
	else{
		nww=0;
	}
	cout<<"Nww = "<<nww<<endl;
	return 0;
}
	
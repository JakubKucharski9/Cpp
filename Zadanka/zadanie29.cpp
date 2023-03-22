#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void p(int * w1, int * w2){
	if(*w2<*w1){
		int c=*w1;
		*w1=*w2;
		*w2=c;
	}
}
int main() {	
	cout<<"Wpisz pierwsza wartosc "; int a; cin>>a;
	cout<<"Wpisz druga wartosc "; int b; cin>>b;
	p(&a, &b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
 }
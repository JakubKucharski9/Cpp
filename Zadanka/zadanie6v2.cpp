#include <iostream>
using namespace std;
int x;

int main() {
	cout<<"Wpisz liczbe: "<<endl;
	cin>>x;
	int p=0;
	if(x%3==0){
		cout<<"Pling";
		p++;
	}
	if(x%5==0){
		cout<<"Plang";
		p++;
	}
	if(x%7==0){
		cout<<"Plong";
		p++;
	}
	if(p==0){
		cout<<x;
	}
	return 0;
}
#include <iostream>
using namespace std;
int x;

int main() {
	cout<<"Wpisz liczbe: "<<endl;
	cin>>x;
	if(x%3==0)
		if(x%5==0)
			if(x%7==0)
				cout<<"PlingPlangPlong"<<endl;
			else
				cout<<"PlingPlang"<<endl;
		else if(x%7==0)
			cout<<"PlingPlong"<<endl;
		else
			cout<<"Pling"<<endl;
	else if(x%5==0)
		if(x%7==0)
			cout<<"PlangPlong"<<endl;
		else
			cout<<"Plang"<<endl;
	else if(x%7==0)
		cout<<"Plong"<<endl;
	else
		cout<<x<<endl;
	return 0;
}
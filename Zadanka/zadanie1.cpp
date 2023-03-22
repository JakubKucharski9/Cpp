#include <iostream>
using namespace std;
int ucz,cuk;


int main() {
	cout << "Wpisz liczbe uczniow: " << endl;
	cin >> ucz;
	cout << "Wpisz liczbe cukierkow: " << endl;
	cin >> cuk;
	int kazdy = cuk / (ucz-1);
	cout <<"Kazdy dostanie: "<<kazdy<<endl;
	int reszta=cuk-(kazdy*(ucz-1));
	cout <<"Zostanie: "<<reszta<<endl;
	return 0;
}
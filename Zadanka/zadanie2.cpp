#include <iostream>
using namespace std;
int a,b,c,d,e,f;

int main() {
	cout<<"Wpisz a"<<endl;
	cin >> a;
	cout<<"Wpisz b"<<endl;
	cin >> b;
	cout<<"Wpisz c"<<endl;
	cin >> c;
	cout<<"Wpisz d"<<endl;
	cin >> d;
	cout<<"Wpisz e"<<endl;
	cin >> e;
	cout<<"Wpisz f"<<endl;
	cin >> f;
	int w=((a*d)-(b*c));
	if(w==0){
		cout<<"Wynik sprzeczny"<<endl;
		return 0;
	}

	int x=((e*d)-(b*f))/((a*d)-(b*c));
	int y=((a*f)-(e*c))/((a*d)-(b*c));	

	
	
	cout<<"Wynik x: "<<x<<endl;
	cout<<"Wynik y: "<<y<<endl;
	
	return 0;
}
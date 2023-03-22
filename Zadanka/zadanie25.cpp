#include <iostream>
#include <conio.h>
int main(){
	using namespace std;
	short zmienna =213;
	
	//adres
	short * wskaznik = &zmienna;
	cout<<&zmienna<<endl;
	cout<<wskaznik<<endl<<endl;
	
	//dane
	cout<<*wskaznik<<endl<<endl;
	
	//modyfikcja
	cout<<zmienna<<endl;
	zmienna=50;
	cout<<zmienna<<endl;
	
	return 0;
}

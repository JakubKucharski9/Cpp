#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;


int main(){
	string linia;
	string linia2;
	fstream plik("zadanie39_plik.txt",ios::in);
	if(plik.good()){
	
		getline(plik,linia);
		char z=linia[5];
		getline(plik,linia2);
		int i=int(linia2[6]);
		int ii=int(linia2[7]);
		int x=(i-48)*10+(ii-48);
		
		while(x>1){
			cout<<z;
			x--;
		}
	}
	
	
	
	
	
	plik.close();
}


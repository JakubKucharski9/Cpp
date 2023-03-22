#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <stdlib.h> 
using namespace std;


int main(){
	ofstream plik("dane.txt");
	ifstream plik2("dane.txt");
	ofstream wynik("wynik.txt");
	if(plik.good()){
		srand(time(NULL));
		int l1=rand()%1000+1;
		for(int i=0;i<l1-1;i++){
			int l2=rand()%999999+1;
			plik<<l2<<endl;
		}
		if(plik2.good() && wynik.good()){
			for(int i=l1-1;i>0;i--){
				string linia;
				getline(plik2,linia);
				int d=linia.length();
				int dop=0;
				for(int f=0;f<d;f++){
					string w;
					w=linia[f];
					
					int l=stoi(w);
					dop=dop+l;
				}
				wynik<<dop<<endl;
			}
		}
	}
	plik.close();
	plik2.close();
	wynik.close();
	
}


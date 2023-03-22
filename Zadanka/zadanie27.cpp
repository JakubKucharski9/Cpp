#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;


int main() {	
	int n;
	int * rozm=&n;
	int * tab=new int[* rozm];
	cout<<"Wpisz element n: ";
	cin>>n;
	srand(time(NULL));
	for(int i=0;i<n;i++){
		tab[i]=rand() % 100;
	}
	int s=0;
	for(int i=0;i<n;i++){
		s+=tab[i];
	}
	cout<<"Suma = "<<s;
	return 0;
}
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

clock_t start, stop;
double czas;


int main() {
	
	cout<<"Ilosc elementow tablicy: ";
	int e;cin>>e;

	int * tab=new int[e];

	clock_t start = clock();
	for(int i=0;i<e;i++){
		tab[i]=i+50;
	}
	clock_t stop = clock();
    double czas = double(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas bez *: "<<czas<<" s"<<endl;
    
	start=clock();
	int *tab2=new int[e];
	int *w=&tab2[0];
	for(int i=0;i<e;i++){
		*w++=i+50;
	
	}
	stop = clock();
	czas = double(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas z *: "<<czas<<" s";

	return 0;
} 

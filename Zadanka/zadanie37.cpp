#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	cout<<"Podaj liczbe rzutow: ";int x; cin>>x;
	srand(time(NULL));
	cout<<"Wylosowano: ";
	while(x>0){
		cout<<rand()%6+1<<" ";
		x--;
	}
}

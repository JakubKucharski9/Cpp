#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int a,b,n,i,la,lb;

int main() {
	cout<<"Wpisz a: "<<endl;
	cin>>a;
	cout<<"Wpisz b: "<<endl;
	cin>>b;
	cout<<"Wpisz n<=100: "<<endl;
	cin>>n;
	int t[100];
	srand(time(NULL));
	i=0;
	for(i;i<n;i++){
		int los=rand()%(b-a+1)+a;
		t[i]=los;
	}
	
	//Pierwszy
	i=0;
	int w=0;
	for(i;i<n;i++){
		w+=t[i];
	}
	float srednia=(float)w/(float)n;
	cout<<srednia<<endl;
	
	//Drugi
	i=0;
	for(i;i<n;i++){
		if(t[i]==a){
			la+=1;
		}
		else if(t[i]==b){
			lb+=1;
		}
	}
	cout<<"Element 'a' wystapil "<<la<<" razy, a element 'b' wystapil "<<lb<<" razy"<<endl;
	
	//Trzeci
	i=0;
	int sn=0;
	int ln=0;
	for(i;i<n;i++){
		if(t[i]%2==1){
			sn+=t[i];
			ln+=1;
		}
	}
	cout<<"Liczba elementow nieparzystych: "<<ln<<" ich suma: "<<sn<<endl;
	
	//Czwarty
	int mint=t[0];
	i=0;
	int ind=0;
	for(i;i<n;i++){
		if(t[i]<mint){
			mint=t[i];
			ind=i;
		}
	}
	cout<<"Element minimalny jest rowny: "<<mint<<" a jego indeks to: "<<ind<<endl;
	
	//Piaty
	int maxt=t[0];
	i=0;
	int ind2=0;
	for(i;i<n;i++){
		if(t[i]>maxt){
			maxt=t[i];
			ind=i;
		}
	}
	cout<<"Element maksymalny jest rowny: "<<maxt<<" a jego indeks to: "<<ind<<endl;
	return 0;
}
	

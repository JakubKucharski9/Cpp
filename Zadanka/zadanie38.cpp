#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int sort(int tab[]){
	int n=6;
	while(n>1){
		for(int i=0;i<n-1;i++){
			if(tab[i]>tab[i+1]){
				int w=tab[i+1];
				tab[i+1]=tab[i];
				tab[i]=w;
			}	
		}
		n=n-1;
	}
	cout<<endl;
	
	for(int i=0;i<6;i++){
		cout<<tab[i]<<" ";	
		
	}
}

int main(){
	int x=6;
	int i=0;
	int t[6];
	cout<<"W dzisiejszym losowaniu Lotto wylosowano liczby: ";
	while(x>0){
		int o=0;
		srand(time(NULL));
		int l=rand()%49+1;
		for(int f=0;f<i+1;f++){
			if(l==t[f]){
				o++;
			}
		}
		if(o==0){
			t[i]=l;
			i++;
			x--;
		}
		else{
			continue;
		}
	}
	
	
	sort(t);
	
}

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;





int main() {
	for(;;){
		int w;
		char k;
		srand(time(NULL));
		int p=rand()%6+1;
		int q=rand()%6+1;
		cout<<"Wylosowales p rowne "<<p<<" oraz q rowne "<<q<<endl;
		if(p%2==0){
			if(q==2 || q==4 || q==5){
				w=p+3*q;
			}
			else{
				w=2*q;
			}
		}
		else{
			if(q==1 || q==3 || q==6){
				if(p==q){
					w=5*p+3;
				}
				else{
					w=2*q+p;
				}
			}
			else{
				if(p==5 && q==5){
						w=min(p,q)+9;
				}
				else{
					w=min(p,q)+4;
				}
		}
					
				
				
		}
			
		cout<<"Wygrana jest rowna: "<<w<<endl<<endl;
		cout<<"By zakonczyc program wpisz dowolny przycisk"<<endl;
		cin>>k;
		system("cls");
		
		
		
	}
	return 0;
}
	

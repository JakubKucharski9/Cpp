#include <iostream>
using namespace std;
int n;

int main() {	
	for(;;){
		int i=2;
		cout<<"Wpisz liczbe n"<<endl;
		cin>>n;
		cout<<endl<<"Liczby pierwsze: "<<endl;
		for(i;i<=n;i++){
			int j=2;
			int x=0;
			for(j;j<=i;j++){
				if(i%j==0){
					x+=1;
				}
				}
				
			if(x==1){
				cout<<i<<endl;
			}
		}
			
		
	cout<<endl;
	}
	return 0;
	
	}
	

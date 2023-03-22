#include <iostream>
#include <string>
using namespace std;


int main() {
	for(;;){
		string pesel,data,plec,kontrolna;
		int p,kon;
		cout<<"Wpisz PESEL: ";
		cin>>pesel;
		cout<<"Wpisz date urodzenia w formecie DD.MM.RRRR : ";
		cin>>data;
		int czy=0;
		cout<<"Wpisz plec M albo K: ";
		cin>>plec;
		
		
		if(pesel[0] == data[8] && pesel[1] == data[9])
			czy+=1;
			
		if(data[6]=='1'){
			if(data[7]=='8'){
				data[3]=int(data[3])+8;
				if(pesel[2] == data[3] && pesel[3] == data[4]){
					czy+=1;
				}	
			}
			else if(data[7]='9'){
				if(pesel[2] == data[3] && pesel[3] == data[4]){
					czy+=1;
				}		
			}
			
			
		}	
		else if(data[6]=='2'){
			data[3]=int(data[3])+2;
			if(pesel[2] == data[3] && pesel[3] == data[4]){
				czy+=1;
			}	
		}		
		
		if(pesel[4]==data[0] && pesel[5]==data[1]){
			czy+=1;
		}
		
		if(plec[0]=='M'){
			p=int(pesel[9]);
			if(p%2==1){
				czy+=1;
			}
		}
		else if(plec[0]=='K'){
			p=int(pesel[9]);
			if(p%2==0){
				czy+=1;
			}
		}
		int wk2=0;
		int i=0;
		kontrolna="1379137913";
		for(i;i<10;i++){
			int k1=(int)kontrolna[i]-48;
			int p1=(int)pesel[i]-48;
			int w1=(int)k1*(int)p1;
			if(w1>9){
				w1=w1%10;
			}
			wk2+=w1;
		}
		if(wk2>9){
			wk2=wk2%10;
		}
		if(wk2!=0){
			kon=10-wk2;
		}
		else{
			kon=wk2;
		}
		int kont=int(pesel[10])-48;
		if(kon==kont){
			czy+=1;
		}
	
		if(czy==5){
			cout<<"PESEL poprawny"<<endl<<endl;
		}
		else{
			cout<<"PESEL nie poprawny"<<endl<<endl;
		}
		
	}
	
	return 0; 
}

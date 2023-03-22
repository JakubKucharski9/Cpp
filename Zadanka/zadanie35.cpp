#include<iostream>
using namespace std;
int w=5;
int f(char c,char z){
	for(int i=0;i<w;i++){
			if(i>0){
				for(int j=0;j<i;j++){
				cout<<" ";
			}
			
			}
			cout<<c<<endl;
		}
		for(int i=w;i>=0;i--){
			if(i<w){
				for(int j=0;j<i;j++){
				cout<<" ";
			}
			cout<<c<<endl;
			
			}
		}
}
int main(){
	for(;;){
		cout<<"Wpisz znak: ";char c;cin>>c;
		cout<<"By zwikszyc znak wpisz '+', by zmniejszyc '-': ";char z;cin>>z;
		if(z=='+'){
			w++;
		}
		else if(z=='-'){
			w--;
		}
		f(c,z);
	}
}

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
void is_sorted(int A[], int n, char c){
	if(c=='r'){
		int f=0;
		for(int i=1;i<n;i++){
			if(A[i]>A[i-1]){
				f++;
			}
		}
		if(f==(n-1)){
			cout<<"1";
		}
		else if(f!=(n-1)){
			cout<<"0";
		}
		
	}
	else if(c=='m'){
		int f=0;
		for(int i=(n-1);i>0;i--){
			if(A[i]<A[i-1]){
				f++;
			}
		}
		if(f==(n-1)){
			cout<<"1";
		}
		else if(f!=(n-1)){
			cout<<"0";
		}
	}
	else{
		cout<<"-1";
	}
}
int main(){
	
	int A[100];
	cout<<"Wpisz wielkosc tablicy: "; int n; cin>>n;
	cout<<"Wpisz argument do tablicy: "<<endl;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		A[i]=x;
	}
	cout<<endl<<"Wpisz co sprawdza (r=rosnaco / m=malejaco): "<<endl;
	char c;cin>>c;
	is_sorted(A,n,c);
}

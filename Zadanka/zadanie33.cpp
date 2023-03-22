#include<iostream>
using namespace std;
void iota(int A[],int n,int start){
	for(int i=0;i<n+1;i++,start++){
		A[i]=start;
	}
}
int main(){
	int A[100];
	cout<<"Wpisz n: "; int n; cin>>n;
	cout<<"Wpisz start: "; int start; cin>>start;
	iota(A,n,start);
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}

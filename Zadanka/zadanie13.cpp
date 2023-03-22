#include <iostream>
#include <cmath>
using namespace std;
int n;

int main() {
	for(;;){
		cout<<"Wpisz liczbe n"<<endl;
	cin>>n;

	int i=2;
	int s=1;
	for(i;i<n;i++){
		if(n%i==0){
			s+=i;
		}
	}
	if(s==n && n>1){
		cout<<"JLD"<<endl;
	}
	else{
		cout<<"NJLD"<<endl;
	}
	}
	
	
	return 0;
	
	}
	

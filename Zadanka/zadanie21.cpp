#include <iostream>
#include <string>
using namespace std;
int g;

int main(){
	cout<<"Wpisz granice ciagu: ";
	cin>>g;
	cout<<endl;
	int a1=0;
	int a2=1;
	int s=0;
	while(a1<=g){
		s=a1+a2;
		if(a2>g){
			break;
		}
		cout<<a2<<endl;
		a1=a2;
		a2=s;
		
		
	}
return 0;
}

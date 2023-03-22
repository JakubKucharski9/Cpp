#include <iostream>
using namespace std;
char x;

int main() {
	cout<<"Wpisz liczbe/litere/znak: "<<endl;
	cin>>x;
	int w=x;
	w = int(x);
	cout<<w<<endl;
	return 0;
}
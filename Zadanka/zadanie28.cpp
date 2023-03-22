#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void f(void){
	int a;
	int *b=&a;
	cout<<b;
}


int main() {
	f();
	
	return 0;
}

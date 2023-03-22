#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;


void czyt_dane(int A[], int &n);
void pisz_tab(int A[], int &n);
float srednia(int A[], int &n);
int ile(int A[], int &n);
int nieparzyste(int A[], int &n);
int min(int A[], int &n);
int max(int A[], int &n);
void sasiednie(int A[], int &n);
int najczestszy(int A[], int &n);
void przestawianie(int A[], int &n);
void kopiowanie(int A[],int B[], int &n);

int main() {	
	cout<<"Wpisz wartosc a: ";int a; cin>>a;
	cout<<"Wpisz wartosc b: ";int b; cin>>b;
	cout<<"Wpisz wartosc n: ";int n; cin>>n;
	int A[100];
	srand(time(NULL));
	for(int i=0;i<n;i++){
		A[i]=rand()%b+a;
	}
	for(int i=0;i<n;i++){
		cout<<A[i];
	}
}

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

void pisz_tab(int A[], int n){
	cout<<"Tablica: ";
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
float srednia(int A[], int n){
	int suma=0;
	for(int i=0;i<n;i++){
		suma+=A[i];
	}
	float srednia=(float)suma/(float)n;
	cout<<"srednia: "<<srednia<<endl;
}
int ile(int A[], int n){
	cout<<"Wpisz element, by sprawdzic ilosc wystapien: ";int e; cin>>e;
	int ile=0;
	for(int i=0;i<n;i++){
		if(A[i]==e){
			ile+=1;
		}
	}
	cout<<"ilosc wystapien: "<<ile<<endl;
} 
int nieparzyste(int A[], int n){
	int ile=0;
	int suma=0;
	for(int i=0;i<n;i++){
		if(A[i]%2!=0){
			ile+=1;
			suma+=A[i];
		}
	}
	cout<<"ilosc nieparzystych: "<<ile<<" suma: "<<suma<<endl;
}
int min(int A[], int n){
	int min=A[1];
	int x=0;
	for(int i=0;i<n;i++){
		if(A[i]<min){
			min=A[i];
			x=i;
		}
	}
	cout<<"najmniejszy element: "<<min<<" index: "<<x<<endl;
}
int max(int A[], int n){
	int max=A[1];
	int x=0;
	for(int i=0;i<n;i++){
		if(A[i]>max){
			max=A[i];
			x=i;
		}
	}
	cout<<"najwiekszy element: "<<max<<" index: "<<x<<endl;
}
void sasiednie(int A[], int n){
	int max=A[0]+A[1];
	int t[2];
	t[0]=A[0];
	t[1]=A[1];
	for(int i=1;i<n;i++){
		int suma=A[i-1]+A[i];
		if(suma>max){
			t[1]=A[i];
			t[0]=A[i-1];
			max=suma;
		}
	}
	cout<<"najwieksza suma sasiednich: "<<t[0]<<" + "<<t[1]<<endl;
}
void przestawianie(int A[], int n){
	cout<<"Tablica odwrocona: ";
	for(int i=n-1;i>=0;i--){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
void kopiowanie(int A[], int B[], int n){
	cout<<"Tablica skopiowana: ";
	for(int i=0;i<n;i++){
		B[i]=A[i];
		cout<<B[i]<<" ";
	}
	cout<<endl;
}


int main() {	
	cout<<"Wpisz wartosc a: ";int a; cin>>a;
	cout<<"Wpisz wartosc b: ";int b; cin>>b;
	cout<<"Wpisz wartosc n: ";int n; cin>>n;
	int A[100];
	int B[100];
	srand(time(NULL));
	for(int i=0;i<n;i++){
		A[i]=rand()%(b-a+1)+a;
	}
	pisz_tab(A, n);
	srednia(A,n);
	ile(A,n);
	nieparzyste(A,n);
	min(A,n);
	max(A,n);
	sasiednie(A,n);
	przestawianie(A,n);
	kopiowanie(A,B,n);
}

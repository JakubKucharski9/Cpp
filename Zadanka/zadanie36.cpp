#include<iostream>
#include<string>
using namespace std;
int main(){
	int w;
	while(w!=4){
		w=0;
		cout<<"Wpisz haslo: ";string h;cin>>h;
		int d=h.length();
		if(d>7){
			w++;
		}

		for(int i=0;i<d;i++){
			int ai=int(h[i]);
			if(ai>32 && ai<48){
				w++;
				break;
			}	
		}

		for(int i=0;i<d;i++){
			int ai=int(h[i]);
			if(ai>47 && ai<58){
				w++;
				break;
			}
		}

		for(int i=0;i<d;i++){
			int ai=int(h[i]);
			if(ai>64 && ai<91){
				w++;
				break;
			}
		}

	}
	cout<<"Haslo jest silne!";
	
}

#define _WIN32_WINNT 0x0502
#define UP 72
#define DOWN 80
#define LEFT 77
#define RIGHT 75
#define PLUS 43
#define MINUS 45
#define ESC 27
#include<windows.h>
#include<iostream>
#include<conio.h>
using namespace std;

class znak{ //stworzenie klasy znak
public:
    int size;
    char znak;
    int os_x;
    int os_y;
    int max_szer;
    int max_wys;
    int min_size;

    void figura(){ //metoda wczytujace informacje o figurze
        cout<<"Podaj dowolny znak: ";cin>>znak; //znak rysowany

        do{ //poczatkowy rozmiar figury
            cout<<"Podaj rozmiar (minimum=5, maksimum=53): ";cin>>size; 
        }
        while(size>53 || size<5);

    }
    void rysuj(){ //metoda rysujaca figure

        system("cls"); //czyszczenie ekranu

        for(int iy=0;iy<os_y;iy++){ //przesuwanie do linii od ktorej ma zaczac rysowac
            cout<<endl;
        }

        int nr_lini=0; //zmienna pomocniczna, liczaca numer lini, ktory aktualnie jest drukowany
        int s=(size)/2; //zmienna pomocniczna, majaca na celu pomoc w okresleniu, ile razy Dziubek w M bedzie mial lini
        for(int p=0;p<size;p++){
            for(int ix=0;ix<os_x;ix++){ //ix- zmienna pomocnicza okreslajaca, gdzie ma zostac wydrukowany znak
            	
            	if(s==0 && size%2==1 || s>0){ //warunek s==0 && size%2==1, okresla czy dziubek jest podwojny czy pojedynczy, a s>0 sprawdza czy ma byc drukowany dziubek czy nie
                    if(ix==os_x-size || ix==os_x-size+nr_lini || ix==os_x-nr_lini-1 || ix==os_x-1) cout<<znak; //warunki kiedy ma zostac wydrukowany znak
                    else cout<<" "; //tworzenie odstepu
                }
                else if(s<=0){ //s>0 sprawdza czy ma byc drukowany dziubek czy nie
                    if(ix==os_x-size || ix==os_x-1) cout<<znak; //warunki kiedy ma zostac wydrukowany znak
                    else cout<<" "; //tworzenie odstepu
                }

            }
            
            cout<<endl; //przechodzenie do kolejnej lini
            nr_lini++; //dodawanie 1 do zmiennej, poniewaz zmienia linie
            s--; //odejmowanie 1 od zmiennej
        }



    }
    void poruszanie(){ //metoda umozliwiajaca poruszanie
        while(1)
        {
            char wcisniety = getch(); // zmienna ma wartosc wcisnietego znaku

            switch(wcisniety) {
                case UP: // wywolywane po wcisnieciu strzalki w gore

                    if(os_y>0 && os_y+size<=max_wys){ //warunki na poruszanie w gore
                        os_y--;
                    }
                    rysuj();
                    break;
                case DOWN: // wywolywane po wcisnieciu strzalki w dol

                    if(os_y>=0 && os_y+size<max_wys){ //warunki na poruszanie w dol
                        os_y++;
                    }
                    rysuj();
                    break;
                case LEFT: // wywolywane po wcisnieciu strzalki w lewo

                    if(os_x>=size && os_x<max_szer){ //warunki na poruszanie w lewo
                        os_x++;
                    }
                    rysuj();
                    break;
                case RIGHT: // wywolywane po wcisnieciu strzalki w prawo

                    if(os_x>size && os_x<=max_szer){ //warunki na poruszanie w prawo
                        os_x--;
                    }
                    rysuj();
                    break;
                case PLUS: // wywolywane po wcisnieciu plusa
                    if(size>=min_size && os_x>size && os_y+size<max_wys){ //warunki na powiekszanie
                        size++;
                    }
                    rysuj();
                    break;
                case MINUS: // wywolywane po wcisnieciu minusa
                    if(size>min_size && size<=max_wys){ // warunki na pomniejszanie
                        size--;
                    }
                    rysuj();
                    break;
                case ESC: //wywolanie po wcisnieciu escape
                    return;
            }
        }
    }
};

int main() {
    HWND hwnd = GetConsoleWindow(); 
    if( hwnd != NULL ) SetWindowPos(hwnd ,0,0,0 ,900,900 ,SWP_SHOWWINDOW|SWP_NOMOVE); //blokowanie rozmiar�w okienka
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo);
    znak obraz; //utworzenie obiektu obraz klasy znak
    obraz.figura(); //wywolanie metody
    obraz.max_szer=csbiInfo.dwSize.X; //maksymalna ilosc na osi x
    obraz.max_wys=csbiInfo.srWindow.Bottom - csbiInfo.srWindow.Top; //maksymalna ilosc na osi y
    obraz.min_size=5; //minimalny rozmiar figury, by wygladala jak M
    obraz.os_x=obraz.max_szer; //punkt poczatkowy na osi x 
    obraz.os_y=csbiInfo.srWindow.Top; //punkt poczatkowy na osi y
    obraz.rysuj(); //wywolanie metody
    obraz.poruszanie(); //wywolanie metody
    obraz.rysuj(); //wywolanie metody
    cout<<endl;
    system("pause");
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    /////////////////////////////
    srand(time(NULL));
    int tablica[15], W[15];
    /////////////////////////////
    for (int i=0;i<15;i++) tablica[i]=rand()%11; //losowanie liczb

    for (int i=0; i<14; i++)
    for (int j=0; j<14; j++)
    if (tablica[j]>tablica[j+1])
    swap(tablica[j], tablica[j+1]);//sortowanie elementow tablicy

    /* for (int i=0;i<15;i++) cout << tablica [i] << endl; */


    for (int i=0;i<15;i++) {  //sprawdzenie powtarzalnosci
    W[i]=0;
    for(int j=0;j<15;j++)
    if (tablica[i]==tablica[j]) W[i]++;}

    /////////////////////////////

    for (int i=0; i<14; i++)
    for (int j=0; j<14; j++)
    if (W[j]>W[j+1])
    {
    swap(W[j], W[j+1]);
    swap(tablica[j], tablica[j+1]);
    }
    /*
    for (int i=0;i<15;i++) {    //zlikwidowanie powtorzenia wypisu
    if (tablica[i]!=tablica[i-1]) {
    cout << "Liczba " << tablica [i] << " wystepuje " << W[i] << " razy." << endl;
    }}
    */

    if (W[14]>2) { cout << "Nie ma liczby wystepujacej najmniej ";     SetConsoleTextAttribute(hConsole, 14);
    cout << "(przynajmniej dwie wystepuja najmniej) " << endl;    SetConsoleTextAttribute(hConsole, 7);}
    if (W[14]==W[14-W[14]]) {
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Nie ma liczby wystepujacej najwiecej razy ";
    SetConsoleTextAttribute(hConsole, 14);
    cout << " (wystepuja przynajmniej 2) " << endl;
    }

    else if (W[14]!=W[14-W[14]]) {
    cout << "Najwiecej razy wystepuje liczba ";     SetConsoleTextAttribute(hConsole, 14);
    cout << tablica [14] << endl;
    }
    SetConsoleTextAttribute(hConsole, 7);


    Sleep (500);
    cout << "Wcisnij [m], zeby wyswietlic szczegolowe dane " << endl;
    char pressedKey = getch();
    if (pressedKey == 'm')
    {
        cout << "Wylosowane liczby: " << endl;
        for (int i=0;i<15;i++) {
            cout << tablica [i] << endl;
        }

        cout << "===============================" << endl;
        cout << "Ile razy wystapily:" << endl;
        for (int i=0;i<15;i++) {    //zlikwidowanie powtorzenia wypisu
        if (tablica[i]!=tablica[i-1]) {
        cout << "Liczba " << tablica [i] << " wystepuje " << W[i] ; if (W[i]==1) cout << " raz" << endl; else cout << " razy " << endl;
        }}
        SetConsoleTextAttribute(hConsole, 14);
        cout << "Niewypisane liczby z przedzialu [0,10] nie wystapily ani razu" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }


    return 0;
}

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    /////////////////////////////
    srand(time(NULL));
    double tablica[15], W[15];
    /////////////////////////////
    for (int i=0;i<15;i++) tablica[i]=rand()%11; //losowanie liczb

    for (int i=0; i<14; i++)
    for (int j=0; j<14; j++)
    if (tablica[j]>tablica[j+1])
    swap(tablica[j], tablica[j+1]);//sortowanie elementow tablicy

    for (int i=0;i<15;i++) cout << tablica [i] << endl;


    for (int i=0;i<15;i++) {  //sprawdzenie powtarzalnosci
    W[i]=0;
    for(int j=0;j<15;j++)
    if (tablica[i]==tablica[j]) W[i]++;}

    /////////////////////////////

    for (int i=0;i<15;i++) {    //zlikwidowanie powtorzenia wypisu
    if (tablica[i]!=tablica[i-1]) {
    cout << "Liczba " << tablica [i] << " wystepuje " << W[i] << " razy." << endl;
    }}






    return 0;
}

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main()
{
    /////////////////////////////////////////////
    unsigned int n,k;
    cout << "Podaj n: "; cin >> n;
    double * tablica = new double [n];
    /////////////////////////////////////////////
    system ("cls");
    cout << "Przed zamiana:" << endl;
    for (int i=0;i<n;i++) {cout << i+1 << ". element tablicy: "; cin >> tablica[i];}
    /////////////////////////////////////////////
    if (n%2==1) k=(n-1)/2;
    else if (n%2==0) k=(n)/2;
    for (int i=0;i<k;i++){swap (tablica[0+i], tablica[(n-1)-i]);}
    /////////////////////////////////////////////
    cout << "Po zamianie:" << endl;
    for (int i=0; i<n;i++){cout << i+1 << ". element tablicy: "; cout << tablica[i] << endl;}
    /////////////////////////////////////////////
    return 0;
}

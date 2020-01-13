#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    ///////////////////////////////////////
    int tablica [5][6];
    for (int j=0;j<6;j++)
    for (int i=0;i<5;i++) tablica [i][j]= i+j;
    ///////////////////////////////////////
    for (int j=0;j<6;j++) {
        cout << " | ";
        for (int i=0;i<5;i++) cout << tablica [i][j] << " | ";
        cout << endl;}
    ///////////////////////////////////////
    for (int i=0;i<5;i++) swap (tablica[0][i], tablica [1][i]);
    ///////////////////////////////////////
    cout << endl << " Po 1 zamianie: " << endl;
    for (int j=0;j<6;j++) {
        cout << " | ";
        for (int i=0;i<5;i++) cout << tablica [i][j] << " | ";
        cout << endl;}
    ///////////////////////////////////////
    int choice[2];
    cout << "Ktore wiersze chcesz zamienic? (1-6) " << endl;
    cout << ": "; cin >> choice[0]; cout << endl;
    cout << ": "; cin >> choice[1]; cout << endl;
    for (int i=0;i<6;i++) swap ( tablica[i][choice[0]-1] , tablica [i][choice[1]-1] );
    ///////////////////////////////////////
    cout << endl << " Po 2 zamianie: " << endl;
    for (int j=0;j<6;j++) {
        cout << " | ";
        for (int i=0;i<5;i++) cout << tablica [i][j] << " | ";
        cout << endl;}
    ///////////////////////////////////////





     return 0;
}

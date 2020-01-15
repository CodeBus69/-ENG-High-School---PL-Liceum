#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int main()
{
    /////////////////////
    double tablica[5][5];
    srand(time(0));
    /////////////////////
    for (int i=0;i<5;i++)
        for (int j=0;j<5;j++)
            tablica[i][j]=rand()%109-20;

    /////////////////////
    for (int i=0; i<5; i++)
    for (int j=0; j<5; j++)
    if (tablica[i][j]>tablica[i][j+1]) {
    swap(tablica[i][j], tablica[i][j+1]); }

    /////////////////////
    for (int i = 0; i <5; i++) {
            cout << "Rzad " << i << " :" <<endl;
    for (int j = 0; j <5; j++)
        cout << tablica[i][j] << endl;

    }


    return 0;
}

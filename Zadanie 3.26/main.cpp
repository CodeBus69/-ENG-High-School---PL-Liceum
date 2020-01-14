#include <iostream>

using namespace std;

int main()
{
    int tablica[4][3];
    for (int i=0;i<4;i++) {
        for (int j=0;j<3;j++) {
            tablica [i][j]=1+(2*j)+(5*i);
            cout << tablica [i][j] << ", ";
        }
    cout << endl;
    }
    return 0;
}

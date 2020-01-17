#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string text;
    cout << "Wpisz tekst: "; cin >> text;
    int textLength = text.size();
    char textInChar[textLength+1];
    strcpy(textInChar, text.c_str());

    ////////////////////////A//////////////////////////
    for (int i=0;i<textLength;i++)
        cout << textInChar[i] << " ";
        cout << endl;
    ////////////////////////B//////////////////////////
    for (int i=textLength;i>=0;i--) cout << textInChar[i] << " ";
        cout << endl;
    ////////////////////////C//////////////////////////
    for (int i=0;i<textLength;i++) {
        cout << textInChar[i];
        if(i%2==1) cout << " ";}
        cout <<endl;
    ////////////////////////D//////////////////////////
    for (int i=textLength;i>=0;i--){
        cout << textInChar[i];
        if(i%3==2) cout << "  ";}


    return 0;
}

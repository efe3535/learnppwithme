#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    float kupunBirKenari;

    cout << "L�tfen k�p�n bir kenar�n� girin"<<endl;
    cin >> kupunBirKenari;
    cout << "K�p�n bir hacmi:" << kupunBirKenari * kupunBirKenari * kupunBirKenari <<endl<<"K�p�n y�zeylerinin toplam alan�:"<< 6 * kupunBirKenari * kupunBirKenari <<endl;

}

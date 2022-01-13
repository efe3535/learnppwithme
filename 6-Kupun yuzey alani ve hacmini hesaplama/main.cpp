#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish");
    float kupunBirKenari;

    cout << "Lütfen küpün bir kenarýný girin"<<endl;
    cin >> kupunBirKenari;
    cout << "Küpün bir hacmi:" << kupunBirKenari * kupunBirKenari * kupunBirKenari <<endl<<"Küpün yüzeylerinin toplam alaný:"<< 6 * kupunBirKenari * kupunBirKenari <<endl;

}

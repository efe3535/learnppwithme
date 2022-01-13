#include <iostream>

using namespace std;
int main() {

    int tamSayi;
    char karakter;
    bool anahtar;
    string yazi = "Lutfen bir tam sayi, bir karakter, bir de anahtar degeri (true/false) giriniz!";
    cout<<yazi<<endl;
    cout<<"Tamsayi girin:";
    cin>>tamSayi;
    cout<<"Karakter girin:";
    cin>>karakter;
    cout<<"Anahtar degeri girin:";
    cin>>anahtar;
    cout<<"Girdiginiz degerler:"<<endl<<tamSayi<<endl<<karakter<<endl<<anahtar<<endl;
    return 0;
}

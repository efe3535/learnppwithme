#include <iostream>
using namespace std;

void dortislem() {
        float sayi1;
        float sayi2;
        float toplam=0,cikarma=0,carpma=0,bolme=0;
        cout<<"Lutfen istenilen degerleri girin."<<endl<<"1. sayi girini girin:"<<endl;
        cin>>sayi1;
        cout<<"2. sayi girini girin:"<<endl;
        cin>>sayi2;
        cout<<"1. ve 2. sayi degerini ile yapilan 4 islemin sonucu:"<<endl;
        toplam = sayi1 + sayi2;
        cikarma = sayi1 - sayi2;
        carpma = sayi1 * sayi2;
        bolme = sayi1/sayi2;
        cout<<"Toplam:"<<toplam<<endl;
        cout<<"Cikarma:"<<cikarma<<endl;
        cout<<"Carpma:"<<carpma<<endl;
        cout<<"Bolme:"<<float(bolme)<<endl;


};
int main() {
    dortislem();

}
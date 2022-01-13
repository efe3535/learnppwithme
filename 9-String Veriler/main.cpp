#include <iostream>
using namespace std;
int main() {
    cout << "INOAA79" << endl;
    string isim;
    string isim2;
    string soyisim;
    string meslek;
    string meslek2;
    int yas;

    cout<<"Lutfen isminizi girin."<<endl;
    cin >> isim;
    cin >> isim2;
    cout<<"Lutfen soyadinizi girin"<<endl;
    cin >> soyisim;
    cout<<"Lutfen yasinizi girin"<<endl;
    cin >> yas;
    cout<<"Lutfen mesleginizi girin"<<endl;
    cin >>meslek;
    cin >> meslek2;
    cout<<"--Kullanıcı bilgileri--"<<endl<<"İsim:"<<isim<<" "<<isim2<<endl<<"Soyisim:"<<soyisim<<endl<<"Yaş:"<<yas<<endl<<"Meslek:"<<meslek<<" "<<meslek2<<endl;
    return 0;
}

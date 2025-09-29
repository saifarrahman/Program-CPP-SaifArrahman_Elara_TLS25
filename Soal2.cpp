#include  <iostream>
#include  <string>
using namespace std;
int main() {
    string katamisterius;
    string hilangangka;

    cout << "Masukkan kata misterius: ";
    cin >> katamisterius;
    cout << "Kata misterius adalah: " << katamisterius << endl;

    string hasil = "";
    for (char c : katamisterius) {
        if (!isdigit(c)) {
            hasil += c;
        }
    }
    cout << "Kata misterius tanpa angka: " << hasil << endl;

    string balik = "";
    for (int i = hasil.length() - 1; i >= 0; i--) {
        balik += hasil[i];
    }
    cout << "Kata setelah dibalik: " << balik << endl;
        
return 0;
}

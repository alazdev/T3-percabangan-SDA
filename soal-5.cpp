#include <iostream>

using namespace std;

int main() {
    int umur, tinggi;

    cout << "Masukkan umur anak (dalam tahun): ";
    cin >> umur;
    cout << "Masukkan tinggi anak (dalam cm): ";
    cin >> tinggi;

    int tarif = 0;

    if (umur <= 1) {
        cout << "Dilarang masuk" << endl;
    } else if (umur <= 3) {
        tarif = 30000;
        if (tinggi > 70) {
            tarif += 10000;
        }
    } else if (umur <= 7) {
        tarif = 40000;
        if (tinggi > 120) {
            tarif += 15000;
        }
    } else if (umur <= 10) {
        tarif = 50000;
        if (tinggi > 150) {
            tarif += 20000;
        }
    } else {
        tarif = 80000;
    }

    if (tarif > 0) {
        cout << "Tarif harga: Rp " << tarif << endl;
    }
    
    return 0;
}
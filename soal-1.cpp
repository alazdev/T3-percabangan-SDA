#include <iostream>

using namespace std;

int main() {
    string nama, tempatTinggal, pangkat;
    int umur;
    double uangTabungan;

    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan umur: ";
    cin >> umur;
    cout << "Masukkan tempat tinggal: ";
    cin >> tempatTinggal;
    cout << "Masukkan uang tabungan dalam dollar: ";
    cin >> uangTabungan;

    // Mengecek pangkat Don
    if (
        umur > 40
        && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana")
        && uangTabungan > 10000000
    ) {
        pangkat = "Don";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    // Mengecek pangkat Underboss
    else if (
        umur >= 25 && umur <= 40
        && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") 
        && uangTabungan >= 1000000 && uangTabungan <= 2000000
    ) {
        pangkat = "Underboss";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    // Mengecek Capo
    else if (
        umur >= 18 && umur <= 24 
        && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") 
        && uangTabungan < 1000000
    ) {
        pangkat = "Capo";
        cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    }
    // Jika tidak memenuhi syarat-syarat di atas, maka dianggap tidak mencurigakan
    else {
        cout << nama << " tidak mencurigakan." << endl;
    }

    return 0;
}
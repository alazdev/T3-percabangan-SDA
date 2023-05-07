#include <iostream>

using namespace std;

int main() {
    int nomorPunggung;
    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;
    
    if (nomorPunggung % 2 == 0) {
        cout << "Posisi pemain: Target Attacker" << endl;
        if (nomorPunggung >= 50 && nomorPunggung <= 100) {
            cout << "dan berhak dipilih menjadi capten team" << endl;
        }
    } else {
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Posisi pemain: Keeper" << endl;
            if (nomorPunggung > 90) {
                cout << "dan diperbolehkan juga memilih posisi Playmaker dan/atau Defender" << endl;
            } else {
                cout << "dan diperbolehkan juga memilih posisi Defender" << endl;
            }
        } else if (nomorPunggung > 90) {
            cout << "Posisi pemain: Playmaker" << endl;
            cout << "dan diperbolehkan juga memilih posisi Defender" << endl;
        } else {
            cout << "Posisi pemain: Defender" << endl;
        }
    }
    
    return 0;
}
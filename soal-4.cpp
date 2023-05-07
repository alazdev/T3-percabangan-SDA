#include <iostream>

using namespace std;

int main() {
    int kaloriLari = 60;
    int kaloriPushUp = 200;
    int kaloriPlank = 5;

    int durasiLari, durasiPushUp, durasiPlank;

    cout << "Masukkan durasi olahraga lari (dalam menit): ";
    cin >> durasiLari;
    cout << "Masukkan durasi olahraga push-up (dalam menit): ";
    cin >> durasiPushUp;
    cout << "Masukkan durasi olahraga plank (dalam menit): ";
    cin >> durasiPlank;

    int totalKalori = (kaloriLari * durasiLari / 5) + (kaloriPushUp * durasiPushUp / 30) + (kaloriPlank * durasiPlank);
    cout << "Total kalori yang terbakar: " << totalKalori << " kalori" << endl;

    return 0;
}
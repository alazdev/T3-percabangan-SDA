#include <iostream>

using namespace std;

int main() {
    int codingScore;
    string interviewScore, codingStatus, interviewStatus;
    
    cout << "Masukkan nilai coding (0 sampai 100): ";
    cin >> codingScore;
    cout << "Masukkan nilai interview (A, B, C, D, E, atau F): ";
    cin >> interviewScore;
    
    if (codingScore > 80) {
        codingStatus = "LOLOS";
    } else if (codingScore >= 60 && codingScore <= 80) {
        codingStatus = "DIPERTIMBANGKAN";
    } else {
        codingStatus = "GAGAL";
    }
    
    if (interviewScore == "A" || interviewScore == "B") {
        interviewStatus = "LOLOS";
    } else {
        interviewStatus = "GAGAL";
    }
    
    if ((codingStatus == "LOLOS" || codingStatus == "DIPERTIMBANGKAN") && interviewStatus == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }
    
    return 0;
}

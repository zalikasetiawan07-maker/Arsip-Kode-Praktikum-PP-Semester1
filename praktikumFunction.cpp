#include <iostream>
#include <cmath>
using namespace std;

void tampilNilai(string nama, double tugas, double uts, double uas){
    cout << "Nama Mahasiswa : " << nama << endl;
    cout << "Nilai Tugas    : " << tugas << endl;
    cout << "Nilai UTS      : " << uts << endl;
    cout << "Nilai UAS      : " << uas << endl;
    cout << "Nilai Akhir    : " << (tugas + uts + uas) / 3 << endl;
}

double luasPersegi(double sisi){
    return pow(sisi, 2);
}

int main(){
    string nama;
    double tugas, uts, uas;

    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas : ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS : ";
    cin >> uts;
    cout << "Masukkan Nilai UAS : ";
    cin >> uas;

    tampilNilai(nama, tugas, uts, uas);

    double sisi;
    cout << "Masukkan panjang sisi persegi : ";
    cin >> sisi;

    cout << "Luas persegi : " << luasPersegi(sisi);


    return 0;
}
#include <iostream>
using namespace std;

int kodejurusan;
string namajurusan;
string statuskuota;

void input() {
    cout << "===== PENDAFTARAN MAHASISWA BARU =====" << endl;
    cout << "1. teknologi informasi ";
    cout << "2. teknik elektro";
    cout << "3. sistem informasi";
    cout << "------------------------------" << endl;
    cout << "Masukkan Kode Jurusan (1-3): ";
    cin >> kodejurusan;
}
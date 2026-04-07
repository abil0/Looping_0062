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
void pilihanjurusan() {
    switch (kodejurusan){
        case 1:
        namajurusan = "Teknologi Informasi";
        statuskuota = "Tersedia (15 kursi)";
        break;
        case 2:
        namajurusan = "Teknik Elektro";
        statuskuota = "Kuota penuh";
        break;
        case 3:
        namajurusan = "Sistem Informasi";
        statuskuota = "Tersedia (5 kursi)";
        break;
        default:
        namajurusan = " Tidak Diketahui";
        statuskuota = "Eror : kode tidak valid";
        break;
    }
}
void output() {
    cout << "\n ===== HASIL SELEKSI ====" << endl;
    cout << "Nama Jurusan : " << namajurusan << endl;
    cout << "Status Kuota : " << statuskuota << endl;
    cout << "............................." << endl;
}
int main() {
    input();
    pilihanjurusan();
    output();

    return 0;
}
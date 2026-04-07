#include <iostream>
using namespace std;

int main() {
    float nilB, nilM, rerata;
    char predikat;

    cout << "Masukkan Nilai Bahasa inggris : ";
    cin >> nilB;
    cout << "Masukkan Nilai Matematika : ";
    cin >> nilM;
    
    rerata = (nilB + nilM) /2;

    if (!(rerata < 60))
     
    status = "Lulus";
    else
    status = "Tidak Lulus";

    cout << "status kelulusan : " << status << "Dengan nilai rerata : " << rerata << endl;

    return 0;
}
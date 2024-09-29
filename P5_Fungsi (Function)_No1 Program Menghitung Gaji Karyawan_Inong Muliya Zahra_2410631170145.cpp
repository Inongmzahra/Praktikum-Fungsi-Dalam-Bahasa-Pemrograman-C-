#include <iostream>
using namespace std;

//Fungsi untuk mengitung gaji pokok
int pokok(int jamKerja) {
    return jamKerja * 7500;
}

//Fungsi untung mengitung gaji lembur
int lembur(int jamKerja) {
    int jamLembur = jamKerja - 8;
    if (jamLembur > 0) {
        return jamLembur * 7500 * 1.5;
    } else {
        return 0;
    }
}

//Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    } else {
        return 0;
    }
}

//Fungsi untuk menghitung uang transport lembur
int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    } else {
        return 0;
    }
}

int main() {
    int nip, jamKerja;
    string nama;

    cout << "Masukkan NIP : ";
    cin >> nip;
    cout << "Masukkan Nama : ";
    cin >> nama;
    cout << "Masukkan Jumlah Jam Kerja : ";
    cin >> jamKerja;

    int gajiPokok = pokok (jamKerja);
    int gajiLembur = lembur (jamKerja);
    int uangMakan = makan (jamKerja);
    int uangTransport = transport (jamKerja);
    int totalGaji = gajiPokok + gajiLembur + uangMakan + uangTransport;

    cout << "Rincian Gaji Karyawan" << endl;
    cout << "NIP : " << nip << endl;
    cout << "Nama : " << nama << endl;
    cout << "Gaji Pokok : Rp " << gajiPokok << endl;
    cout << "Gaji Lembur : Rp " << gajiLembur << endl;
    cout << "Uang Makan : Rp " << uangMakan << endl;
    cout << "Uang Transport : Rp " << uangTransport << endl;
    cout << "Total Gaji : Rp " << totalGaji << endl;

    return 0;
}

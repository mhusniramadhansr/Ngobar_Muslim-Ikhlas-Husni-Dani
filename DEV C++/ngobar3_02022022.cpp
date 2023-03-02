#include <iostream>

using namespace std;

int main()
{   
    string namaBarang;
    int hargaBarang, jumlahBeli, jumlahBayar, uangBayar, uangKembali, ppn, totalBayar;
    cout << "   Toko Elektronik\n";
    cout << "======================\n";
    cout << "Nama Barang      : "; cin >> namaBarang;
    cout << "Harga Barang     : "; cin >> hargaBarang;
    cout << "Jumlah Beli      : "; cin >> jumlahBeli;

    jumlahBayar = hargaBarang * jumlahBeli;
    ppn = jumlahBayar / 10; 
    totalBayar = ppn + jumlahBayar;
    cout << "Jumlah Bayar     : "; cout << jumlahBayar << endl;
    cout << "Ppn              : "; cout << ppn << endl;
    cout << "Total Bayar      : "; cout << totalBayar << endl;
    cout << "=====================\n";
    cout << "Uang bayar       : "; cin >> uangBayar;
    uangKembali = uangBayar - totalBayar;
    cout << "Uang Kembali     : "; cout << uangKembali << endl;
    cout << "TERIMA KASIH ATAS KUNJUNGANNYA\n";
    return 0;
}
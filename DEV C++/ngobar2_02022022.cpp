#include <iostream>

using namespace std;

int main()
{   
    int lamaRental, total;
    float persen;
    const int hargaTetap = 200000;
    string namaGroup, alamat, noTelp;
    cout << "   Studio UNPI\n";
    cout << "======================\n";
    cout << "Isi daftar penyewa berikut\n";
    cout << "Nama Group      : "; cin >> namaGroup;
    cout << "Alamat          : "; cin >> alamat;
    cout << "No.Telp         : "; cin >> noTelp;

    cout << "======================\n";
    cout << "Lama Rental     : "; cin >> lamaRental;

    persen = 25 / hargaTetap;
    int persenFinal = 50000;
    total = persenFinal * lamaRental;
    int finalHarga = hargaTetap + total;

    if(lamaRental > 1) {
        cout << "Total Bayar     : "; cout << finalHarga - 50000;
    } else {
        cout << "Total Bayar     : "; cout << hargaTetap;
    }
    return 0;
}
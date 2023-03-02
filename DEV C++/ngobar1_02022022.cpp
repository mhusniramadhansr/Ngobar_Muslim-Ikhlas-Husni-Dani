#include <iostream>

using namespace std;

int main()
{
cout << "   BIODATA PRIBADI SAYA\n";
cout << "==============================\n";
string nama, kotaLahir, tanggalLahir, alamat, noTelepon;
cout << "Nama Lengkap       : "; getline(cin, nama);
cout << "\n";
cout << "Kota Kelahiran     : "; cin >> kotaLahir;
cout << "\n";
cout << "Tanggal Lahir      : "; cin >> tanggalLahir;
cout << "\n";
cout << "Alamat             : "; cin >> alamat;
cout << "\n";
cout << "No. Telp           : "; cin >> noTelepon;
cout << "\n";

cout << "Perkenalkan nama saya " << nama << ", saya lahir di " << kotaLahir << ", saya lahir pada tanggal " << tanggalLahir << ", alamat saya di " << alamat << ", teman-teman boleh menghubungi saya di no telepon ini ---> " << noTelepon << "\n\n Salam Persahabatan!!\n";


return 0;
}

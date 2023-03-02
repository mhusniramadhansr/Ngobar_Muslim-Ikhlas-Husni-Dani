#include <iostream>

using namespace std;

int main() {
    int b,a,e;

    string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Masukkan Angka : ";
    cin >> b;
    for(a = b - 1; a >= 0; a--) {
        cout << u[a] << " ";
    }

    return 0;
}
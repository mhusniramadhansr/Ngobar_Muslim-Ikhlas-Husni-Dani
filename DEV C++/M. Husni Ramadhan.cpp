#include <iostream>

#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cout <<"\n";
    cout <<"LATIHAN ! \n";
    cout <<"SOAL NOMOR 1 \n";
    cout <<"\n";
    cout <<"M. HUSNI RAMADHAN\n";
    cout <<"217200034\n";
    cout <<"\n";
    for(x = 1; x <= 5; x++) {
        for(y = 1; y <= 5; y++) {
            cout << setw(4) << x + y << " ";
        }
        cout << "\n";
        
    }

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cout <<"\n";
    cout <<"LATIHAN ! \n";
    cout <<"LATIHAN SOAL 2\n";
    cout <<"M. HUSNI RAMADHAN \n";
    cout <<"217200034 \n";
    cout <<"\n";
    for(x = 1; x <= 10; x++) {
        for(y = 1; y <= x; y++)
        cout << setw (4) << (x * 2) + y << " ";
    }
    cout << "\n";
}

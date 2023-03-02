#include <iostream>

using namespace std;

int main() {
    int a,b,e;

    string u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Masukkan Angka : ";
    cin >> e;
    for(b = 0; b < e; b++) {
        for(a = e; a >= b; a--) {
            cout << u[a] << " ";
            
        }
        
        cout << endl;
    }

    return 0;
}
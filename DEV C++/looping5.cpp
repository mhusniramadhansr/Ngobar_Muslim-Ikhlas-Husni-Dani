#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    for(x = 1; x <= 10; x++) {
        for(y = 1; y <= 10; y++) {
            cout << setw(4) << x * y << " ";
        }
        cout << "\n";
    }

    return 0;
}
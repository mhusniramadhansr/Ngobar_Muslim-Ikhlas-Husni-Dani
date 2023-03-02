#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukan nilai n: ";
    cin >> n;

    cout << "\nsegitiga 1\n";
    for(int a = 0; a < n; a++) {
        for(int b = 0; b < a+1; b++) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 2\n";
    for(int c = 0; c < n; c++) {
        for(int d = n; d > c; d--) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 3\n";
    for(int e = 0; e < n; e++)  {
        for(int f = n-1; f > e; f--) {
            cout << " ";
        }
        for(int g = 0; g < e+1; g++) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 4\n";
    for(int h = 0; h < n; h++) {
        for(int i = 0; i < h; i++) {
            cout << " ";
        }
        for(int j = n; j > h; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 5\n";
    for(int k = 0; k < n; k++) {
        for(int l = n-1; l > k; l--) {
            cout << " ";
        }
        for(int m = 0; m < k+1; m++) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 6\n";
    for(int o = 0; o < n; o++) {
        for(int p = 0; p < o; p++) {
            cout << " ";
        }
        for(int q = n; q > o; q--) {
            cout << "* ";
        }
        cout << "\n";
    }

    cout << "\nsegitiga 7\n";
    for(int r = 0; r < n; r++) {
        for(int s = n-1; s > r; s--) {
            cout << " ";
        }
        for(int t = 0; t < r+1; t++) {
            cout << "* ";
        }
        cout << "\n";
    }
    for(int u = 1; u < n; u++) {
        for(int v = 0; v < u; v++) {
            cout << " ";
        }
        for(int w = n; w > u; w--) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}
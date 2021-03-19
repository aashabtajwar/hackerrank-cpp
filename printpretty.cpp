#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        double A; cin >> A;
        double B; cin >> B;
        double C; cin >> C;
        // setting manipulators for A
        cout << hex << left << showbase << nouppercase;
        cout << (long long) A << endl;
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
        cout << B << endl;
        cout << scientific << uppercase << noshowpos << setprecision(9);
        cout << C << endl;
    }
}


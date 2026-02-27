#include <iostream>
#include <iomanip>   // for setw
using namespace std;

int absolute(int n) {
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {

    // Table Header
    cout << setw(6) << "val"
         << setw(6) << "lo"
         << setw(6) << "hi"
         << setw(15) << "absolute(val)"
         << setw(20) << "clamp(val,lo,hi)"
         << endl;

    cout << "----------------------------------------------------------" << endl;

    // Test Cases
    int vals[] = {-15, 0, 25, -3};
    int los[]  = {-10, -10, -10, 0};
    int his[]  = {10, 10, 10, 5};

    for (int i = 0; i < 4; i++) {
        cout << setw(6) << vals[i]
             << setw(6) << los[i]
             << setw(6) << his[i]
             << setw(15) << absolute(vals[i])
             << setw(20) << clamp(vals[i], los[i], his[i])
             << endl;
    }

    return 0;
}